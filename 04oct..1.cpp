#include<bits/stdc++.h>
using namespace std;
void sol(){
  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int totalwater = k*l;
  int totaltoast = totalwater/n;
  int lime = c*d;
  int salt = p/np;

  int ans = min(totaltoast, min(lime,salt));

  if(n<2){
    cout<<ans<<endl;
  } 
  else  {
    cout<<ans/n<<endl;
  } 
  
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
