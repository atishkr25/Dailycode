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
 
 int t;cin>>t;
 while(t--){
  int a,b,c;
  cin>>a>>b>>c;
  
  if(c%2==0){
    //Anas turn
    if(a>b) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
  }
  else{
    // ketties turn
    if(b>a) cout<<"Second"<<endl;
    else cout<<"First"<<endl;
  }
 }
 
 
 
}