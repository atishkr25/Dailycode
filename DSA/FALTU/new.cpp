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

void sol()
{   
    int n; cin>>n;
    vi a(n);
    a[0] = 0, a[1] = 1;
    fr(i, 2, n) {
        a[i] = a[i-1] + a[i-2];
    }
    fr(i, 0, n) cout<<a[i]<<" ";
    cout<<nl; 
}
int main()
{
    int t=1;
    while(t--)
    sol(); 
}