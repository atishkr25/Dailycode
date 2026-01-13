#include <bits/stdc++.h>
using namespace std;

#define fast_io cin.sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long
#define ll long long
#define pb push_back
#define eb emplace_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(x) (int)(x).size()
#define MOD 1000000007
#define INF (int)1e16
#define endl "\n"
#define yes cout << "YES" << endl; return;
#define no cout << "NO" << endl; return;

#define vi vector<int>
#define vvi vector<vector<int> >
#define pii pair<int, int>

// #define f(i, a, b) for (int i = a; i < b; i++)
// #define fr(i, a, b) for (int i = a; i > b; i--)

void sol() {
    int n; cin>>n;
    if(n == 2){
        cout<<2<<endl;
        return;
    }
    if(n==3) {
        cout<<3<<endl;
        return;
    }

    else if(n & 1) {
        cout<<1<<endl;
    }
    else cout<<0<<endl;
}

int32_t main() {
    fast_io;
    
    int t = 1;
    cin >> t;
    while(t--) {
        sol();
    }
    
}