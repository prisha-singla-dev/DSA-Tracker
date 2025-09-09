#include<bits/stdc++.h>
using namespace std;

//digit concept 
// N%10 - last digit ; next step N/10

void digit(int N){
    // while(N>0){
    //     int last_digit = N%10;
    //     cout<<last_digit<<" ";
    //     N = N/10;
    // }

    int count = 0;
	count = (int)(log10(N));
    cout<<count;
}

//reverse concept 
//rev_num = rev_num*10+last

void reverse(int n){
    int rev_num = 0;
    while (n>0){
        int last_digit = n%10;
        n = n/10;
        rev_num = (rev_num*10)+last_digit;
    }
    cout<<rev_num;
}

bool palindrome(int n){
    int Num = n;
    int revNum = 0;
    while(n>0){
        int lastDig = n%10;
        revNum=(revNum*10)+lastDig;
        n=n/10;
    }
    if(revNum == Num)
        return true;
    else return false;
}

bool armstrong(int n){
    int Num = n;
	long long int newNum=0;
	while(n!=0){
		int lastDigit = n%10;
		newNum = newNum+(lastDigit*lastDigit*lastDigit);
		n=n/10;
	}
	if(newNum == Num)
		return true;
	else return false;
}

int sumOfDivisors(int n){
    int sum = 0;

    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            sum = sum+i;
            if(i!=n/i){
                sum = sum+n/i;
            }
        }
        
    }
    return sum;

}

//approach1 - o(min(n1,n2))
int GCD(int n1,int n2) {
    int gcd = 1;
    int small = min(n1,n2);
    for(int i = 1; i<=small ; i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            gcd = i; 
        }
    }
    return gcd;
}

// approach2 - reverse - o(min(n1,n2))
int GCD(int n1,int n2) {
    int gcd = 1;
    int small = min(n1,n2);
    for(int i = small; i>=1 ; --i)
    {
        if(n1%i==0&&n2%i==0)
        {
            gcd = i; 
            break;
        }
    }
    return gcd;
}

//approach3 - Euclidean algorithm - o(log(min(n1,n2)))
// gcd(a,b) = gcd(a%b,b)(if a>b);
int gcd(int a , int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a = a%b;
        }
        else
        {
            b = b%a;
        }
    }
    if(a==0)
        return b;
    return a;
}


vector<int> divisors(int n){
    vector<int> divisors;
    int sqRt = sqrt(n);
    //o(sqrt(n))
    for (int i =1;i<=sqRt;i++)
    {
        if(n%i == 0)
        {
            divisors.push_back(i);

            if(i!=n/i)
            {
                divisors.push_back(n/i);
            }
        }
    }
    // o(n log)
    sort(divisors.begin(), divisors.end()); // sorted
    return divisors;
}

bool isPrime(int n) {
    // code here
    int count = 0;
    for(int i=1;i<=sqrt(n);++i)
    // for(int i=1;i*i<=n;++i) // for time complexity
    {
        if (n%i==0)
        {
            ++count;
            if(n / i != i){
            count = count + 1;
        }
        }
    }
    if(count == 2)
        return true;
    return false;
}
    



int main(){
    int N,N1,N2 ;
    // cin>>N;    
    // digit(N);
    // reverse(N);
    // palindrome(N);
    // armstrong(N);
    // sumOfDivisors(N);
    // cout<<sumOfDivisors(N);
    cout<<"Enter two numbers";
    cin>>N1>>N2;
    int gdc = gcd(N1,N2);
    cout<<gdc;

    // cout<<"Enter a number to find its divisors";
    // cin>>N;
    // divisors(N);
    // for(auto it: divisors(N)){
    //     cout<<it<<" ";
    // }

    // cout<<"Enter a number to check if it is prime or not";
    // cin>>N;
    // if(isPrime(N)){
    //     cout<<"It is prime";
    // }
    // else{
    //     cout<<"Not a prime";
    // }
    
    return 0;

    //time complexity - O(log n)
}