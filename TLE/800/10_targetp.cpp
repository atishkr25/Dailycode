#include <bits/stdc++.h>
using namespace std;

#define nl endl
#define ll long long 
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define f first
#define s second
#define fr(i, a, b) for (int i = a; i < b; i++)

void solve() {
    char a[10][10];
    fr(i, 0, 10){
        fr(j, 0, 10){
            cin>>a[i][j];
        }
    }

    int sum = 0;
    fr(i, 0, 10){
        fr(j, 0, 10){
            if(a[i][j] == 'X')
            {
                if (i == 0 || i == 9 || j == 0 || j == 9) {
                        sum += 1;
                } else if (i == 1 || i == 8 || j == 1 || j == 8) {
                    sum += 2;
                } else if (i == 2 || i == 7 || j == 2 || j == 7) {
                    sum += 3;
                } else if (i == 3 || i == 6 || j == 3 || j == 6) {
                    sum += 4;
                } else if (i == 4 || i == 5 || j == 4 || j == 5) {
                    sum += 5;
                }
            }
        }
    }
    // cout<<one+two+three+four+five<<endl;
    cout<<sum<<nl;
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