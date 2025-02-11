#include <bits/stdc++.h>
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
#define vc vector<char>

#define fr(i, a, b) for (ll i = a; i < b; i++)

//aplying lower bound to get minimum possible element which is greater than equals to prev
ll lowerBound(vll &vec, ll x) {
    auto it = lower_bound(vec.begin(), vec.end(), x);
    return ((it != vec.end()) ? *it : -1);
}

void sol() {
    ll n, m;  
    cin>>n>>m;
    vll a(n), b(m);

    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    
    sort(all(b));
    ll prev = min(a[0], b[0]-a[0]);
    fr(i, 1, n) 
    {
        ll ans = lowerBound(b, a[i] + prev);
        if (ans != -1){
            if (a[i] >= prev && ans - a[i] >= prev) {
                a[i] = min(a[i], ans - a[i]); 
                
            } 
            else {
                a[i] = ans - a[i];
            }
        }
        if (a[i] < prev) {
            cout <<"No"<<nl;
            return;
        }
        prev = a[i];
    }
    cout <<"Yes"<< nl;
}

int main() {
    int t;
    cin>>t;
    while(t--) sol();
}
