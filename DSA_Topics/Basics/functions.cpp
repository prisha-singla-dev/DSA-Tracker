#include<bits/stdc++.h>
using namespace std;    
// Function are set of instructions that perform a specific task
// Function are used to break the code into smaller modules and modularize the code
// Function increases the reusability & readability of the code
// void - no return type - int - return type
//parameters - input to the function
//arguments - actual values passed to the function
void printName(string name){
    cout<<"Hello "<<name<<endl;
}
int main(){
    string name;
    cin>>name;
    printName(name);
    return 0; 
}

// in-built functions
int main(){
    int a, b;
    cin>>a>>b;
    int minn = min(a,b);
    cout<<"Minimum: "<<minn<<endl;
    int maxx = max(a,b);
    cout<<"Maximum: "<<maxx<<endl;
    return 0;
}

int maxx(int a, int b){
    if(a>=b)
        return a;
    //it is looking for a return statement, if not present , will return a garbage value.
}
int main(){
    int a, b;
    cin>>a>>b;
    int maximum = maxx(a,b);
    cout<<"Maximum: "<<maximum<<endl;
    return 0;
}

// pass by value - we can't change the actual values of the variables
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10, b = 20;
    swap(a,b);// here a and b send as a copy , so any changes made are not reflected in the actual values
    cout<<a<<" "<<b<<endl;
    return 0;
}


//pass by reference - we can change the actual values of the variables ; & - passes the address of the variables
void swap(int &a, int &b)// & - reference - takes the original values of the variables, no copy , so any changes made are reflected in the actual values
{
    int temp = a;
    a = b;
    b = temp;
}   
int main(){
    int a = 10, b = 20;
    swap(a,b);// here a and b send as a reference , so any changes made are reflected in the actual values
    cout<<a<<" "<<b<<endl;
    return 0;
}