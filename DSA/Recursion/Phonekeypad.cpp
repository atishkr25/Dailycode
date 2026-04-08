#include <bits/stdc++.h>
using namespace std;
#define fast_io cin.sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define MOD 1000000007
#define INF (int)1e16
#define nl "\n"

#define vi vector<int>
#define vvi vector<vector<int> >
#define pii pair<int, int>

#define fr(i, a, b) for (int i = a; i < b; i++)
#define frr(i, a, b) for (int i = a; i > b; i--)

void solve(int i, string ds, vector<string> &ans, string s, int n, unordered_map<char, string>mp){
    if(i == n){
        ans.pb(ds);
        return;
    }
    string letter = mp[s[i]];
    for(auto it : letter){
        ds.pb(it);
        solve(i+1, ds, ans, s, n, mp);
        ds.pop_back();
    }
}
void sol() {
    string s; cin>>s;
    int n = s.size();
    string ds = "";
    vector<string> ans;
    unordered_map<char,string> mp = {
        {'2',"abc"}, {'3',"def"}, {'4',"ghi"},
        {'5',"jkl"}, {'6',"mno"}, {'7',"pqrs"},
        {'8',"tuv"}, {'9',"wxyz"}
    };
    solve(0, ds,ans, s, n, mp);
    for(auto x:ans) cout<<x<<" "<<nl;

}

int32_t main() {
    fast_io;
    
    int t = 1;
    // cin >> t;
    while(t--) {
        sol();
    }
    
}