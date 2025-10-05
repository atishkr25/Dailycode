#include <bits/stdc++.h>
using namespace std;

#define nl endl
#define ll long long int
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define f first
#define s second
#define fr(i, a, b) for (int i = a; i < b; i++)

void solve() {
    int n; cin>>n;
    vector<int> a(n);
    fr(i, 0, n) cin>>a[i];

    int ans = 0;
    int maxi = *max_element(all(a));
    int mini = *min_element(all(a));
    
    ans = max(ans, (maxi-a[0]));
    ans = max(ans, a[n-1]-mini);
    fr(i, 0, n-1){
        ans = max(ans, (a[i]-a[i+1]));
    }

    cout<<ans<<nl;
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