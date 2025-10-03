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
   int n, m;
   cin >> n >> m;
   vector<pair<int,int>> v(n);
   fr(i, 0, n) 
   {
        int a, b;
        cin >> a >> b;
        v[i].f = a;
        v[i].s = b;
   }
   for(auto x : v){
    cout << x.f <<" "<< x.s <<nl;
   }
}
int main()
{
  int t; cin>>t;
  while(t--)
  sol(); 
}