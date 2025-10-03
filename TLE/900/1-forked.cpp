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
    int a,b, m, n, p, q;
    cin>>a>>b;
    cin>>m>>n;
    cin>>p>>q;
    vector<pair<int, int>> arr = { {a,b}, {a,-b}, {-a,b}, {-a,-b}, {b,a}, {b,-a}, {-b,a}, {-b,-a} };
    set<pair<int, int>>st1;
    set<pair<int, int>>st2;

    for(auto x : arr) {
        st1.insert({m+x.f, n+x.s});
    }
    for(auto x : arr) {
        st2.insert({p+x.f, q+x.s});
    }
    int cnt = 0;
    for(auto it: st1) {
        if(st2.find(it) != st2.end()) cnt++;
    }
    cout<<cnt<<nl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    sol(); 
}