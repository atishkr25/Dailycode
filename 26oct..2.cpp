#include<bits/stdc++.h>
using namespace std;
void sol(){
  int n; cin>>n;
  vector<int> a(n);
  map<int,int> mp;
  for(int i =0;i<n;i++){
  cin>>a[i];
  mp[a[i]]++;
}
int m = mp.size();
  if(n==1){
    cout<<"-1"<<endl;
  }
  else if(n==2 && m==1){
    cout<<"-1"<<endl; 
  }
  else {
     int mini = *min_element(a.begin(),a.end());
for(int i=0;i<n;i++){
  if(a[i]==mini){
    cout<<1<<endl;
    cout<<i+1<<endl;
  }
}
  }
 
  
  // else if(n>2 && m==1){
  //   cout<<1<<endl;
  //   cout<<1<<endl;
  // }
  // else{
  //   sort(a.begin(),a.end());
  //   cout<<n-1<<endl;
  //   for(int i=1;i<n;i++) cout<<a[i]<<" ";

  //   cout<<endl;
  // } 

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
 
 sol();
 
 
}