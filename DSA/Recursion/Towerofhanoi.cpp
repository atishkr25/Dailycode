#include<bits/stdc++.h>
using namespace std;

void toh(vector<pair<int, int>>& arr, int n, int beg, int aux, int end) {
    if (n == 1) {
        arr.push_back({beg, end});
        return;
    }
    toh(arr, n-1, beg, end, aux);
    arr.push_back({beg, end});
    toh(arr, n-1, aux, beg, end);
}

void sol() {
    int n; 
    cin >> n;
    cout << (1 << n) - 1 << endl;
    vector<pair<int, int>> arr;
    toh(arr, n, 1, 2, 3);
    for (auto x : arr) {
        cout << x.first << " " << x.second << endl;
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
