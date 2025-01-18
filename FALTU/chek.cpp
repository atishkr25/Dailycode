#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int t; cin>>t;
while(t--){
  int n; cin>>n;
  string s; cin>>s;
  map<char,int> mp;
  for (int i=0;i<n;i++){
    mp[s[i]]++;
  }
  int mx = 1;
  char maxi=' ';
 for(auto x: mp){
  if(x.second>=mx){
    maxi=x.first;
  }
 }
 for(int i=0;i<n;i++){
  if(mp[i]==1){
    s[i]=maxi;
    break;
  }
 }
 cout<<s<<endl;
}
}