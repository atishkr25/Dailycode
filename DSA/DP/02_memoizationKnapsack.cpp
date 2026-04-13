#include <bits/stdc++.h>
using namespace std;

const int d = 1000;
int dp[d][d];
//yaha iski jagah vector of vector vv initaialize karlo with -1 .. chodo ab aage dekhenge 

int ks(int w[], int v[], int cap, int n)
{
    if (n == 0 || cap == 0) return 0;

    if (dp[n][cap] != -1) return dp[n][cap];

    if (w[n - 1] <= cap) {
        dp[n][cap] = max(v[n - 1] + ks(w, v, cap - w[n - 1], n - 1),
                         ks(w, v, cap, n - 1));
    } else {
        dp[n][cap] = ks(w, v, cap, n - 1);
    }

    return dp[n][cap];
}

int main() {
    int n; cin >> n;
    int v[n], w[n];

    for (int i = 0; i < n; i++) cin >> w[i];
    for (int i = 0; i < n; i++) cin >> v[i];

    int cap; cin >> cap;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= cap; j++) {
            dp[i][j] = -1;
        }
    }

    cout << ks(w, v, cap, n) << endl;
    return 0;
}