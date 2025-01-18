#include<bits/stdc++.h>
using namespace std;
 
#define nl endl
#define ll long long int
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define f first
#define s second
#define MOD 250000007
 
#define vi vector<int>
#define vc vector<char>
 
#define fr(i, primeNums, b) for (int i = primeNums; i < b; i++)
#define frr(i, primeNums, b) for (int i = primeNums; i > b; i--)

// Sieve Eratosthenes
vector<bool> sieve(int n){
    vector<bool> prime(n+1, 1);
    prime[0]=prime[1]=0;
    for(int i=2; i*i<=n; i++){
        if(prime[i]) {
            for(int j= i*i; j<=n; j += i) prime[j] = 0;
        }
    }
    return prime;
}

// spf --> smallest prime factor of i
// EX:-
// spf[4] -> 2
// spf[8] -> 2 
// spf[10] -> 2 
// spf[11] -> 11 
// spf[9] -> 3 


int main()
{
    // finding lowest prime factors 
    vector<int> spf(25, -1);
    for(int i=2; i<25; i++){
        if(spf[i] == -1){
            for(int j=i; j<25; j += i){
                if(spf[j] == -1) spf[j] = i;
            }
        }
    }
    //finding greatest prime factor 
    vector<int> gpf(100, -1);
    for(int i=2; i<100; i++){
        if(gpf[i] == -1){
            for(int j=i; j<100; j += i){
                gpf[j] = i;
            }
        }
    }

    int n = 10000000;
    
    cout<<"Greatest prime factor of N: "<< gpf[n] <<endl;
    cout<<"lowest prime factor of N: " << spf[n] <<endl;
    cout<<"prime factorization of N: ";

    prime factorozation of the number: 
    int temp = n;
    while(temp > 1){
        cout << spf[temp]<< ' ';
        temp /= spf[temp];
    }
    cout<<nl;
    
    
    cout<<"All prime numbers till N: "<<nl;
    vector<bool> primeNums = sieve(n);
    fr(i, 0, n+1){
        if(primeNums[i]) cout<< i <<" ";
    }
    
}