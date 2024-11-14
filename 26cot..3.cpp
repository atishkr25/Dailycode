#include<bits/stdc++.h>
using namespace std;

void sol() {
    int n; 
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    bool chek = true;
    bool ekor = true;
    for(int i=0;i<n;i++){
      if(a[i]!=b[i]){
        chek = false;
      
      }
      
      if(a[n-i-1]!=b[i]){
        ekor =false;
      }
    }
    if(chek==true || ekor == true) cout<<"Bob\n";
    else cout<<"Alice\n";
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
    while (t--) {
        sol();
    }
}
