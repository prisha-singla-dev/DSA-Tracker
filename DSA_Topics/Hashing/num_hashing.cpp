#include<bits/stdc++.h>
using namespace std; 

//NUMBER HASHING
//when declared max size could be 10^7 - int
// int hash[13] ={0};

// //max size could be 10^8 - bool
// bool hash[13] ={0};


int main()
{    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; ++i)
    {
        cin>>arr[i];
    }

    //pre-computing
    //inside main 
    // - hash max size 10^6 - int : else will throw segmentation fault
    // - max size could be 10^8 - bool
    int hash[13] ={0};
    for(int i=0;i<n;++i)
    {
        hash[arr[i]] += 1;
    }


    int q;
    cin>>q;
    for(int i =0; i<q;++i)
    {
        int num;
        cin>>num;
        //fetching
        cout<<hash[num]<<endl;
    }
    return 0;
}