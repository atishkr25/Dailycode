#include <bits/stdc++.h>
using namespace std;

#define nl endl
#define ll long long 
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define f first
#define s second
#define fr(i, a, b) for (int i = a; i < b; i++)

void solve() {
    ll n; cin>>n;
    vector<ll> a(n);
    ll cnt = 0;
    for(auto &x:a) {
        cin>>x;
    }

    ll ans = 0;
    for(int i=0; i<n; i++){
        if(a[i] > 0){
            while(i<n && a[i]>0) i++;
            ans++;
        }
    }
    cout<<min(2ll, ans)<<nl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t; // uncomment if multiple test cases
    while (t--) {
        solve();
    }
}