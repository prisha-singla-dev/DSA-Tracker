#include<bits/stdc++.h>
using namespace std;

//sum of numbers from 1- n using recursion using parameterised
int s2(int i,int sum)
{
    if(i<0)
    {
        return sum;
    }
    s2(i-1,sum+i);
}

//sum of numbers from 1- n using recursion using functional
int sum(int n)
{
    if(n==0)
        return 0;
    return n + sum(n-1);
}

int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    int s = s2(n,0);
    cout<<s;
    return 0;
}