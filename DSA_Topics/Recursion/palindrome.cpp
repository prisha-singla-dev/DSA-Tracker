#include<bits/stdc++.h>
using namespace std;

//time complexity - O(n/2)
//check if the string is the palindrome or not 
bool palin(int i, string &s)
{
    int n = s.size();
    if(i>=n/2)
        return true;
    if(s[i] != s[n-1-i])
        return false;
    palin(i+1,s);

}


int main()
{
    string str; 
    cin>>str;
    cout<<palin(0, str);
    return 0;
}