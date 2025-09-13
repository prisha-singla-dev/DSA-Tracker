#include<bits/stdc++.h>
using namespace std;

//time complexity - 2^n - exponential - recursion tree
//return the sum of fibonacci numbers
int fib(int n)
{
    if(n<=1)
        return n;
    int last = fib(n-1);
    int second_last = fib(n-2);
    return last + second_last;
}


int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}