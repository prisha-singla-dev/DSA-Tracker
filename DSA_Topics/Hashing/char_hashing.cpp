#include<bits/stdc++.h>
using namespace std; 

//no issue with the size
int main()
{    
    string s;
    cin>>s;

    //pre-compute
    //if only lower case present
    int hash[26] = {0};
    for(int i =0;i<s.size();++i)
    {
        hash[s[i] - 'a'] ++;
    }
    
    //if only upper case present
    int hash[26] = {0};
    for(int i =0;i<s.size();++i)
    {
        hash[s[i] - 'A'] ++;
    }

    //if only lower case present
    int hash[256] = {0};
    for(int i =0;i<s.size();++i)
    {
        hash[s[i]] ++;
    }


    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
        cout<<hash[c-'A']<<endl;
        cout<<hash[c]<<endl;
    }
}