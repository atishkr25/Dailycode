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
#define vc vector<char>
 
#define fr(i, a, b) for (ll i = a; i < b; i++)

void sol()
{
    int n, a, b;
    cin>>n >>a >>b;

    if(a+b+2 <=n || a==b && b==n ){
      cout<<"YES"<<nl;
    }
    else cout<<"NO"<<nl;
}
int main()
{
 int t; cin>>t;
 while(t--)
 sol(); 
}