#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  ll n;
  cin >> n;
  ll lo = 1;
  ll hi = n, mid, ans = 0;

  while(lo<=hi) {
    mid = (lo+hi) / 2;
    if(mid*mid > n) hi = mid-1;
    else {
      lo = mid+1;
      ans = mid;
    }
  }

  cout << ans << endl;
}
