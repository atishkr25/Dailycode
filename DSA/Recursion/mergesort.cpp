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

#define fr(i, a, b) for (ll i = a; i < b; i++)

void Merging(int l, int h, int mid, vi &a) {
    vi ans;
    int left = l;
    int right = mid + 1;

    while (left <= mid && right <= h) {
        if (a[left] <= a[right]) {
            ans.pb(a[left]);
            left++;
        } else {
            ans.pb(a[right]);
            right++;
        }
    }
    while (left <= mid) {
        ans.pb(a[left]);
        left++;
    }
    while (right <= h) {
        ans.pb(a[right]);
        right++;
    }

    int idx = 0;
    fr(i, l, h + 1) {
        a[i] = ans[idx++];
    }
}

void Mergesort(int l, int h, vi &a) {
    if (l >= h) return;
    int mid = (l + h) / 2;
    Mergesort(l, mid, a);
    Mergesort(mid + 1, h, a);
    Merging(l, h, mid, a);
}

void sol() {
    vi a = {5, 4, 3, 2, 1};
    int n = a.size();

    Mergesort(0, n - 1, a);
    for (auto x : a) cout << x << " ";
    cout << nl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) sol();
}
