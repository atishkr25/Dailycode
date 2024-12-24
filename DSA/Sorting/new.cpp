#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void sol() {
     int N, K;
    cin >> N;

    int L[N + 1], R[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> L[i] >> R[i];
    }

    cin >> K;

    for (int i = 1; i <= N; i++) {
        if (K >= L[i] && K <= R[i]) {
            cout << (N-i+1);
            return ;
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    sol();
}
