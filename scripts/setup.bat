@echo off
:: Navigate to DSA-Practice directory
cd /d %~dp0\..\

:: Set up Git Aliases
doskey dsapush=git add . ^& git commit -m "Day %date:~-10,2% Practice" ^& git push origin main
doskey dsasheet=start https://docs.google.com/spreadsheets/d/1awF396_LdJANKzpjVoxSOCNgptn7tUW3nCIL7qqKxJM

:: Navigate to scripts/logs Folder and Create Daily Log if template.md exists
doskey dsalog=cd scripts/logs ^& if exist template.md copy template.md %date:~-4,4%-%date:~-7,2%-%date:~-10,2%.md

echo Aliases set successfully. You can now use dsapush, dsasheet, and dsalog!
pause
