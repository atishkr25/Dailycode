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

void Print(int i, int n) {
    if(i > n) return;
    cout<<i<<" ";
    Print(i+1, n);
}
void sol()
{
    int n; cin>>n;
    Print(1, n);
}
int main()
{
 int t = 1;
 while(t--)
 sol(); 
}