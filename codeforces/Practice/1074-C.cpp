#include <bits/stdc++.h>
using namespace std;

#define fast_io cin.sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(x) (int)(x).size()
#define MOD 1000000007
#define INF (int)1e16
#define nl "\n"
#define yes cout << "YES" << endl; return;
#define no cout << "NO" << endl; return;

#define vi vector<int>
#define vvi vector<vector<int> >
#define pii pair<int, int>

// #define f(i, a, b) for (int i = a; i < b; i++)
// #define fr(i, a, b) for (int i = a; i > b; i--)

void sol() {
    int n; cin>>n;
    vi a(n);
    for(auto &x :a) cin>>x;
    int cnt = 1, maxi = 1;
    
    sort(all(a));
    for(int i=1; i<n; i++){
        if(a[i] == a[i-1]) continue;
        else if(a[i] - a[i-1] == 1) cnt++;
        else cnt = 1;

        maxi = max(maxi, cnt);
    }
    cout<<maxi<<endl;
}   

int32_t main() {
    fast_io;
    
    int t = 1;
    cin >> t;
    while(t--) {
        sol();
    }
    
}