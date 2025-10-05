#include <bits/stdc++.h>
using namespace std;

#define nl endl
#define ll long long 
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define ff first
#define ss second
#define fr(i, a, b) for (int i = a; i < b; i++)

void solve() {
    ll n; cin>>n;

    if(n%4 != 0 && n%6 != 0){
        cout<<-1<<nl; 
        return;
    }
    if(n%4==0 && n%6==0)
    {
        ll mini1 = min(n/4, n/6);
        ll maxi1 = max(n/4, n/6);

        cout<<mini1<<" "<<maxi1<<nl;
    }
    else if(n/4 == 0) cout<<n/4<<" "<<n/4<< nl;
    else cout<<n/6<<" "<< n/6<< nl;


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