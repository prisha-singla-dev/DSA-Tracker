#include<bits/stdc++.h>
using namespace std;
//write a program that takes an input of age and if the age is greater than or equal to 18, it should print "You are an adult" otherwise it should print "You are a child"
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>=18)
        cout<<"You are an adult"<<endl;
    else
        cout<<"You are a child"<<endl;
    return 0;
}
/*A School has following rules for grading system:
a. Below 25 - F
b. 25 - 44  - E
c. 45 - 49 - D
d. 50 - 59 - C  
e. 60 - 79 - B
f. 80 - 100 - A
Write a program that takes an input of marks and prints the corresponding grade.*/

int main(){
    int marks;
    cout<<"Enter your marks:"<<endl;
    cin>>marks;
    if(marks<25)
        cout<<"F"<<endl;
    else if(marks>=25 && marks<=44)
        cout<<"E"<<endl;
    else if(marks>=45 && marks<=49)
        cout<<"D"<<endl;
    else if(marks>=50 && marks<=59)
        cout<<"C"<<endl;
    else if(marks>=60 && marks<=79)
        cout<<"B"<<endl;
    else
        cout<<"A"<<endl;
    return 0;
}

/* Take the age from the user and then decide :
1. If age<18
    print "You are not eligible to work"
2. If age >18
    print "You are eligible to work"
3. If age>=55 and age<=57
    print "Eligible for job but you are about to retire"
4. If age>57
    print "Retirement time"
*/

int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if(age<18)
        cout<<"You are not eligible to work"<<endl;
    else if(age>18 && age<=55)
        cout<<"You are eligible to work"<<endl;
    else if(age>=55 && age<=57)
        cout<<"Eligible for job but you are about to retire"<<endl;
    else
        cout<<"Retirement time"<<endl;
    return 0;
}

