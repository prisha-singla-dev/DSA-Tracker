#include<bits/stdc++.h>
using namespace std;
//Patterns - loops practice 
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }}
void print3(int n){
    for(int i =1;i<=n;i++){
		for(int j =1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}}


void print4(int n){
    for(int i=1;i<=n;i++){
		for(int j =1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}}

void print5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }}



void print6(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1 ;j<=n;j++){
			if((i+j)<=(n+1))
				cout<<j<<"  ";
		}
		cout<<endl;
	}}


void print7(int n){
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
    }}

void print8(int n){
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
    }}

void print10(int n){
   for (int i =1 ; i<=2*n-1;i++){
    int stars = i;
    if(i>n)
    {
        stars = 2*n-i;
    }
    for(int j =1;j<=stars;j++){
        cout<<"*";
    }
    cout<<endl;
   }}




void print11(int n){
    int start = 1;
    for(int i =0;i<n;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<endl;
    }}


void print12(int n){
    int space = 2*(n-1);
    for(int i = 1;i<=n;i++){
        //numbers
        for(int j =1;j<=i;j++){
            cout<<j;
        }
        //spaces
        for(int j =1;j<=space;j++){
            cout<<" ";  
        }
        //numbers
        for(int j =i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }}

void print13(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num = num+1;
        }
        cout<<endl;
    }}

void print14(int n){
    for(int i =1;i<=n;i++){
        char alpha = 'A';
        for(int j =1;j<=i;j++){
            cout<<alpha<<" ";
            alpha = alpha+1;
        }
        cout<<endl;
    }}

void print15(int n){
    for(int i =0;i<n;i++){
        char ch ='A';
        for(int j=0;j<n-i;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }}

void print16(int n){
    char ch ='A';
    for(int i=1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<<ch<<" ";
            
        }
        ch=ch+1;
        cout<<endl;
       
    }}


void print17(int n){
    for(int i =0;i<n;i++){
        //space
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //alpha 
        char ch ='A';
        int breakpoint = (2*i+1)/2;       
        for(int j=1;j<=(2*i+1);j++){ 
            cout<<ch;           
            if(j<=breakpoint){
                ch ++;
            }
            else{
                ch --;
            }                            
        }
        //space
        for(int j =0;j<(n-i-1);j++){
            cout<<" ";
        }
        cout<<endl;
    }}




void print18(int n){
    for(int i =0;i<n;i++){
        for(char ch='E'-i; ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }}

void print19(int n){
   int space = 0;
    // Upper half
    for(int i = 0; i < n; i++) {
        // Left stars
        for(int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        // Spaces
        for(int j = 0; j < space; j++) {
            cout << "  ";  // Double space to align properly
        }
        // Right stars
        for(int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        space += 2;
        cout << endl;
    }

    space -= 2; // Adjust space for symmetry

    // Lower half (mirror of the upper half)
    for(int i = n - 1; i >= 0; i--) {
        // Left stars
        for(int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        // Spaces
        for(int j = 0; j < space; j++) {
            cout << "  ";
        }
        // Right stars
        for(int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        space -= 2;
        cout << endl;
    }}


void print20(int n){
    int spaces = 2*n-2;
    for(int i =0;i<2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        //stars
        for(int j =1;j<=stars;j++){
            cout<<"* ";
        }
        //space
        for(int j =1;j<=spaces;j++){
            cout<<" ";
        }
        //stars
        for(int j =1;j<=stars;j++){
            cout<<"* ";
        }
        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;

    }}

void print21(int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }}





int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        print21(n);
       
    }
    //time complexity - O(n^2)
    //space complexity - O(1)
}