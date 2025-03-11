#include<bits/stdc++.h>
using namespace std;

//digit concept 
// N%10 - last digit ; next step N/10

void digit(int N){
    while(N>0){
        int last_digit = N%10;
        cout<<last_digit<<" ";
        N = N/10;
    }

    // int count = 0;
	// count = (int)(log10(n));
    // return count;
}

int main(){
    int N ;
    cin>>N;
    digit(N);
    return 0;

    //time complexity - O(log n)
}