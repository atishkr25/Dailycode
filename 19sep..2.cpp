#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif

int n; cin>>n;
vector<int> a(n);
map<int,int> mp;
for(int i=0;i<n;i++){
  cin>>a[i];
  mp[a[i]]++;
}
for(auto it : mp){
  cout<<it.first<<" ";
}
}