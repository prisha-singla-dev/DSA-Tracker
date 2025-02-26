#include<bits/stdc++.h>
using namespace std;
int main(){
    // Array stores data of similar datatype
    // Array elements are stored in contiguous memory locations
    // Array Declaration - 1D Array
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;

    arr[3] +=10;
    cout<<arr[3]<<endl;

    // Array Declaration - 2D Array
    int arr[2][3];
    arr[1][2] = 15;
    cout<<arr[1][2]<<endl;
    cout<<arr[0][2]<<endl;//garbage value
    return 0;
}