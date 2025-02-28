#include<bits/stdc++.h>
using namespace std;
//Patterns - loops practice 
// 1. *****
//    ****
//    ***
//    **
//    *
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }}


    // 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
void print2(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1 ;j<=n;j++){
			if((i+j)<=(n+1))
				cout<<j<<"  ";
		}
		cout<<endl;
	}
}

// 3. *
//   ***
//  *****
void print3(int n){
    int j;
    for(int i =0;i<n;i++){
        //space
        for(j = 0;j<(n-i-1);j++){
            cout<<" ";        }
        //star
        for(j =0; j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(j = 0;j<(n-i-1);j++){
            cout<<" ";        
        }
        cout<<endl;
    }
}

//4. *******
//    *****
//     ***
//      *
void print4(int n){
    int j;
    for(int i =0;i<n;i++){
        //space
        for(j = 0;j<i;j++){
            cout<<" ";        }
        //star
        for(j =0; j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //space
        for(j = 0;j<i;j++){
            cout<<" ";        
        }
        cout<<endl;
    }
}


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