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
   ll a, b, n;
   cin >> a >> b >> n;
   vll nums(n);
   for(auto &x : nums) cin>>x;
   ll ans = b, sum = 0;
   for(auto x : nums) {
    sum += min(a-1, x);
   }
   cout<<ans+sum<<endl;
}
int main()
{
 int t; cin>>t;
 while(t--)
 sol(); 
}