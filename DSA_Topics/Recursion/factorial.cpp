#include<bits/stdc++.h>
using namespace std;

//factorial of numbers from 1- n using recursion using functional
int fact(int n)
{
    if(n==0)
        return 1;
    return n * fact(n-1);
}

// factorial of numbers from 1- n using recursion using parameterized
int fact(int n, int prod)
{
    if(n<1)
    {
        return prod;
    }
    fact(n-1,n*prod);
}


int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    cout<<fact(n,1);
    return 0;
}