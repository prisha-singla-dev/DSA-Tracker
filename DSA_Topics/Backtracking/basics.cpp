#include<bits/stdc++.h>
using namespace std;


//1-N using recursion via backtracking
void linear_3(int i,int n)
{
    if(i<1)
        return;
    linear_3(i-1,n);
    cout<<i<<endl;
}

//print N-1 using recursion via backtracking
void reverse_2(int i,int n)
{
    if(i > n)
        return;
    reverse_2(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter the value for n";
    cin>>n;
    // linear_3(1, n);
    reverse_2(1,n);
    return 0;
}