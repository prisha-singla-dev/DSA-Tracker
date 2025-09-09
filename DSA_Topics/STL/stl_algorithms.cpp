#include<bits/stdc++.h>
using namespace std;

bool (pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    // if(p1.second==p2.second){
    //     if(p1.first>p2.first) return true;
    //     return false;
    // }
    if(p1.first>p2.first) return true;
    return false;
}

//1) .sort()
//can be applied to all containers except map
void explainSort(){
    sort(a,a+n)//a is included and a+n is not - (a,a+n]
    sort(v.begin(),v.end())//in case of vectors

    //{1,3,5,2} - if i want to sort just 5 and 2 
    sort(a+2,a+4);

    //sort in descending order
    sort(a,a+n,greater<int>)//greater<int> - comparator

    // if you want to sort any other way 
    pair<int,int> a[] = {{1,2},{2,1},{4,1}}
    // sort it according to asc order of second element; if the element is same, then sort acc to first element in desc order

    sort(a,a+n,comp)//we gotta define comp for our own
}

// 2) __builtin_popcount()
//builtin_popcount() - returns no. of 1s (no. of set bits)
int num = 7;
int count =__builtin_popcount()//returns 3 (as 7 : 111)

//for long long 
int num = 16578657457890
int count = __builtin_popcountll(long long number);

// 3) next_permutations
//next_permutations : display all the permutations of it 
string s = "123"
//if you want to print all the permutations , sort first and then find permutations , else only permuatations after the given will be printed .
sort(s.begin(),s.end());
do{
    cout<<s<<endl;
}while(next_permutations(s.begin(),s.end()));

// 4) max_element()
int maxi = *max_element(a,a+n);
// *- gives element ; without address

//5) min_element()
int mini = *min_element(a,a+n);

int main(){
    return 0;
}

