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
  char arr[3][3];
  int sum=0;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }

  for(int i=0;i<3;i++){
    int a=0,b=0,c=0;
    for(int j=0;j<3;j++){
      
      if(arr[i][j]=='A') a++;
      if(arr[i][j]=='B') b++;
      if(arr[i][j]=='C') c++;
    }
    if(a<1) { cout<<"A"<<endl; break;}
    if(b<1) { cout<<"B"<<endl; break;}
    if(c<1) { cout<<"C"<<endl; break;}
  }

 }
}