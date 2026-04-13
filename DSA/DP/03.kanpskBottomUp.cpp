#include <bits/stdc++.h>
using namespace std;

int ks(int cap, int w[], int v[], int n) {
    int dp[cap + 1] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = cap; j >= w[i]; j--) {
            dp[j] = max(dp[j], v[i] + dp[j - w[i]]);
        }
    }

    return dp[cap];
}

int main() {
    int n; cin >> n;
    int w[n], v[n];

    for (int i = 0; i < n; i++) cin >> w[i];
    for (int i = 0; i < n; i++) cin >> v[i];

    int cap; cin >> cap;

    cout << ks(cap, w, v, n) << endl;
    return 0;
}