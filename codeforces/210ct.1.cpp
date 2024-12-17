#include<bits/stdc++.h>
using namespace std;
void sol(){
    int t; cin>>t;
    int x,y,z;
    int sum1=0,sum2=0,sum3=0;
    for(int i =0;i<t;i++){
        cin>>x>>y>>z;
        sum1+=x;
        sum2+=y;
        sum3+=z;
    }
   if((sum1==0 && sum2==0) && sum3==0) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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