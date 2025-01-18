#include <bits/stdc++.h>
using namespace std;
void solve(){
int n,a,b;
cin>>n>>a>>b;
 string s;
 cin>>s;
int m=0,p=0;
for(int i=0;i<100;++i){
    for(char c:s){
    if(c=='N')p+=1;
    else if(c=='E')m+=1;
    else if(c=='S')p-=1;
    else if(c=='W')m-=1;
    if(m==a&&p==b){
        cout<<"YES\n";
        return;
     }
    }
 }
   cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--) solve();
}
