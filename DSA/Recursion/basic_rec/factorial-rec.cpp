#include<bits/stdc++.h>
using namespace std;
int fact(int n){
  if(n==0) return 1;
  return fact(n-1)*n; // cals fact(4) , cals fact(3)...(2)....(0) then 0 gives 1 (base case meets) and so on all the function return and get multiply with corresonding n, at the end the value is get printed 
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
 int n; cin>>n;
 int ans=fact(n);
 cout<<ans<<endl;
 
}