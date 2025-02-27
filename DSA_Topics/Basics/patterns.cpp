#include<bits/stdc++.h>
using namespace std;
//Patterns - loops practice 
// 1. *****
//    *****
//    *****
//    *****
//    *****
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }}
// 2. *
//    **    
//    ***
//    ****
//    *****
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }}
// 3. 1
//    1 2
//    1 2 3
//    1 2 3 4
//    1 2 3 4 5
void print3(int n){
    for(int i =1;i<=n;i++){
		for(int j =1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

// 4. 1
//    2 2   
//    3 3 3
//    4 4 4 4
//    5 5 5 5 5
void print4(int n){
    for(int i=1;i<=n;i++){
		for(int j =1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print1(n);
        print2(n);
        print3(n);
        print4(n);
    }
    //time complexity - O(n^2)
    //space complexity - O(1)
}