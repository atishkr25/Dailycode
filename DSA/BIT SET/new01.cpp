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
 
 int n; cin>>n;
 int cnt=0;
 while(n!=0){
  if(n&1)
    cnt++;
  
  n=n>>1;
 }
cout<<cnt<<endl;
 
 
}