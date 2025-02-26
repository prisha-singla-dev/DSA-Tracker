# Import necessary libraries
import gspread
from google.oauth2.service_account import Credentials
from datetime import datetime
import subprocess
import os
from dotenv import load_dotenv

# Load environment variables from .env file
load_dotenv()

# === Authenticate with Google Sheets Securely ===
scope = ["https://spreadsheets.google.com/feeds", "https://www.googleapis.com/auth/drive"]

# Get the path from environment variable
json_keyfile_path = os.getenv("GOOGLE_SERVICE_ACCOUNT_JSON")

if not json_keyfile_path:
    raise ValueError("Error: GOOGLE_SERVICE_ACCOUNT_JSON environment variable is not set!")

creds = Credentials.from_service_account_file(json_keyfile_path, scopes=scope)
client = gspread.authorize(creds)

spreadsheet = client.open("DSA Tracker")

# Fetch all required sheets
log_sheet = spreadsheet.worksheet('Daily DSA Log')
counter_sheet = spreadsheet.worksheet('Problem Counter')
progress_sheet = spreadsheet.worksheet('Daily Progress')
weekly_sheet = spreadsheet.worksheet('Weekly Progress')
contest_sheet = spreadsheet.worksheet('Contest Performance')

# === Ensure Logs Folder Exists ===
SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
LOG_FILE = os.path.join(SCRIPT_DIR, "logs/progress.log")
os.makedirs(os.path.dirname(LOG_FILE), exist_ok=True)

# === Function to Save Logs Locally ===
def save_log_local(log_entry):
    try:
        with open(LOG_FILE, "a", encoding="utf-8") as file:
            file.write(log_entry + "\n")
        print(f"✅ Log saved in {LOG_FILE}")
    except Exception as e:
        print(f"❌ Error saving log: {e}")

# === Function to update Daily DSA Log ===
def update_daily_log(topic, problems, time_spent, notes):
    date = datetime.today().strftime('%Y-%m-%d')
    new_row = [date, topic, f'{problems} | {time_spent}', notes]
    
    # Update Google Sheets
    log_sheet.append_row(new_row)
    
    # Save locally
    log_entry = f"{date} | {topic} | {problems} Problems | {time_spent} | Notes: {notes}"
    save_log_local(log_entry)

    print("✅ Daily Log Updated!")

# === Function to update Problem Counter ===
def update_problem_counter(platform, difficulty, count):
    try:
        cell = counter_sheet.find(platform)
        if not cell:
            print(f"❌ Error: Platform '{platform}' not found.")
            return
        
        col = {'Easy': 2, 'Medium': 3, 'Hard': 4}.get(difficulty)
        if col is None:
            print("❌ Error: Invalid difficulty level. Choose from Easy/Medium/Hard.")
            return
        
        # Ensure the cell is not empty before updating
        current_count = counter_sheet.cell(cell.row, col).value
        current_count = int(current_count) if current_count else 0
        
        # Update count
        counter_sheet.update_cell(cell.row, col, current_count + count)
        
        # Save locally
        log_entry = f"{datetime.today().strftime('%Y-%m-%d')} | Platform: {platform} | Difficulty: {difficulty} | Count: {count}"
        save_log_local(log_entry)        
        
        print("✅ Problem Counter Updated!")
    except Exception as e:
        print(f"❌ Error updating problem counter: {e}")

# === GitHub Automation ===
GITHUB_REPO = "https://github.com/prisha-singla-dev/DSA-Tracker.git"

def push_to_github():
    if not os.path.exists(LOG_FILE):
        print(f"❌ Error: Log file '{LOG_FILE}' does not exist.")
        return
    try:
        subprocess.run(['git', 'add', 'logs/'], check=True)
        subprocess.run(['git', 'commit', '-m', f'DSA Progress for {datetime.today().strftime("%Y-%m-%d")}'], check=True)
        subprocess.run(['git', 'push'], check=True)
        print("✅ Logs pushed to GitHub!")
    except subprocess.CalledProcessError as e:
        print(f"❌ Error pushing to GitHub: {e}")

# === Main Execution ===
if __name__ == '__main__':
    while True:
        print("\n=== DSA Tracker Menu ===")
        print("1️⃣ Update Daily Log")
        print("2️⃣ Update Problem Counter")
        print("3️⃣ Push Changes to GitHub")
        print("4️⃣ Exit")
        
        choice = input("Enter your choice: ")
        
        if choice == "1":
            topic = input("Enter DSA Topic (e.g., Arrays, Graphs): ")
            problems_solved = input("Enter Number of Problems Solved: ")
            time_spent = input("Enter Time Spent (e.g., 1.5 hrs): ")
            notes = input("Enter Notes (optional): ")
            update_daily_log(topic, problems_solved, time_spent, notes)
        
        elif choice == "2":
            platform = input("Enter Platform (LeetCode/GFG/CodeChef): ")
            difficulty = input("Enter Difficulty (Easy/Medium/Hard): ")
            count = input("Enter Number of Problems: ")
            update_problem_counter(platform, difficulty, int(count))
        
        elif choice == "3":
            confirm = input("Are you sure you want to push changes to GitHub? (y/n): ")
            if confirm.lower() == 'y':
                push_to_github()
            else:
                print("🚫 GitHub push canceled.")
        
        elif choice == "4":
            print("👋 Exiting DSA Tracker. Goodbye!")
            break
        
        else:
            print("❌ Invalid choice. Please try again.")
