#include<bits/stdc++.h>
using namespace std;
void sol(){
  int  n,m;
  cin>>n>>m;
  vector<int> a(m);
  for(int i=0;i<m;i++) cin>>a[i];
  
  int start = 1;
  long long t = 0;
  for(int i=0;i<m;i++){
    if(a[i] >= start){
     t  = t + a[i]-start;
    }
    else {
      t = t + n- (start-a[i]);
    }
    start = a[i];
  }
  cout<<t<<endl;
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