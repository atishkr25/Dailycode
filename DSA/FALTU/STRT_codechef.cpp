#include <bits/stdc++.h>
using namespace std;

void sol() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) 
        cin >> x;
    int sum=0;
    int cnt = 0;
    int j=1;
    for (auto x : a) {
      sum+=x;
      while(j*j<sum) 
        j+=2;
      if(j*j==sum) cnt+=1;
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t; 
    cin >> t;
    while (t--) 
        sol();
}
