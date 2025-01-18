#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ll n;
  cin >> n;
  ll lo = 1, hi = n, mid, ans = 0;

  while (lo <= hi) { 
    mid = (lo + hi) / 2;
    // 1 2 3 4 5 6 7 8 9
    if (mid * mid <= n) {
        ans = mid; 
        lo = mid + 1; 
    } else {
        hi = mid - 1; 
    }
  }

  cout << ans << endl;
}
