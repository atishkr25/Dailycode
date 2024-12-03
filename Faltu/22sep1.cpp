#include <bits/stdc++.h>
using namespace std;

void sol() {
    int n; 
    cin >> n;

    vector<string> st(n);  
    for(int i = 0; i < n; i++) 
        cin >>st[i];  

    for(int i = n-1; i >=4; i--) {
      for(int j=0;i<4;j++){ 
         if(st[i][j]=='#')
      cout<<j+1<<" ";
      }

    }
  
}
int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif

int t; cin>>t;
  while(t--){
    sol();
  }
}
