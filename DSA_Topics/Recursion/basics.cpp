#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void print(){   
   // Base Condition.
   if(cnt == 3)  return;
   cout<<cnt<<endl;
   // Count Incremented
   cnt++;
   print();
}

//print name n times
//time - O(n), space- O(n)
void name(int n){
    if(n==0)
        return;
    cout<<"Prisha"<<endl;
    name(n-1);
}

//print 1-N using recursion 
void linear(int i, int N){
    if(i>N)
        return;
    cout<<i<<endl;
    linear(i+1,N);

}
// or - approach2
// int i = 1;
// void linear_2(int n) {
//     // code here
//     if(i>n)
//         return;
//     cout<<n<<" ";
//     ++i;
//     linear_2(n);        
// }

//1-N using recursion via backtracking
void linear_3(int i,int n)
{
    if(i<1)
        return;
    linear_3(i-1,n);
    cout<<i<<endl;
}

//print N-1 using recursion
// int i = 1;
// void reverse(int n) {
//     // code here
//     if(i>n)
//         return;
//     cout<<n<<" ";
//     reverse(n-1);        
// }

//print N-1 using recursion via backtracking
void reverse_2(int i,int n)
{
    if(i > n)
        return;
    reverse_2(i+1,n);
    cout<<i<<endl;
}

int main(){
    //print();
    int n;
    cout<<"Enter the value for n";
    cin>>n;
    // name(n);
    // linear(1, n);
    // linear_2(1, n);
    // linear_3(1, n);
    // reverse(1,n);
    reverse_2(1,n);
    return 0;
}