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

#define vi vector<int>
#define vvi vector<vector<int> >
#define pii pair<int, int>

#define fr(i, a, b) for (int i = a; i < b; i++)
#define frr(i, a, b) for (int i = a; i > b; i--)

void Allpermutation(vector<int>& ds, vector<vector<int>>& ans, 
                    vector<int>& freq, vector<int>& a, int n) {
    
    if(ds.size() == n){
        ans.push_back(ds);
        return;
    }

    for(int i = 0; i < n; i++){
        if(freq[i] == 0){
            ds.push_back(a[i]);     // pick element
            freq[i] = 1;            // mark as used
            
            Allpermutation(ds, ans, freq, a, n);
            
            freq[i] = 0;            // backtrack
            ds.pop_back();          // remove last element
        }
    }
}

void sol() {
    vector<int> a = {1, 2, 3};
    int n = a.size();
    
    vector<vector<int>> ans;
    vector<int> ds;
    vector<int> freq(n, 0);
    
    Allpermutation(ds, ans, freq, a, n);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int32_t main() {
    fast_io;
    
    int t = 1;
    // cin >> t;
    while(t--) {
        sol();
    }
    
}