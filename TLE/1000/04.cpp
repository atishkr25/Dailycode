#include<bits/stdc++.h>
using namespace std;
 
#define nl endl
#define ll long long 
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define f first
#define s second
#define MOD 1000000007
#define vll vector<ll>
#define vll vector<ll>
#define fr(i, a, b) for (ll i = a; i < b; i++)

void sol()
{
   ll n; cin>>n;
   vll Vecofsec;
   ll lowest_first = INT_MAX;
   

   for(ll i=0; i<n; i++) {
        ll asize; cin>>asize;
        vll a(asize);
        for(auto &el : a) cin>>el;

        sort(a.begin(), a.end());
        lowest_first = min(lowest_first, a[0]);
        Vecofsec.push_back(a[1]);
    
   }
   sort(Vecofsec.begin(), Vecofsec.end());
   ll secondSum = accumulate(Vecofsec.begin(), Vecofsec.end(), 0);

   ll ans = lowest_first + secondSum - Vecofsec[0];

   cout << ans <<endl;
}
int main()
{
  ll t; cin>>t;
  while(t--) sol(); 
}