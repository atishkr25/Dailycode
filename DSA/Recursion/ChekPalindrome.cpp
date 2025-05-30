#include<bits/stdc++.h>
using namespace std;
 
#define nl endl
#define ll long long int
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define f first
#define s second
#define MOD 1000000007
 
#define vi vector<int>
#define vll vector<ll>
 
#define fr(i, a, b) for (ll i = a; i < b; i++)

bool chekPalind(int i, int n, string s) {
    if(i >= n/2) return true;

    else if(s[i] != s[n-i-1]) return false;
    return chekPalind(i+1, n, s);
}

void sol()
{
    string s; cin>>s;
    int n = s.size();
    if(chekPalind(0, n, s)) cout<<"Number is Palindrome";
    else cout<<"Number is not palindrome";
}
int main()
{
    int t=1;
    while(t--)
    sol(); 
}