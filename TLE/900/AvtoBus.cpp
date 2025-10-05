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

    if(n<4 || n&1 == 1){
        cout<<-1<<nl; 
        return;
    }
    else {
        ll maxi = n/4;
        ll mini = ceil((n*1.0)/6);
        cout<<mini <<" "<<maxi<<nl;
    }


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