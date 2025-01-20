// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
//  int n; cin>>n;
//  int a,b;
//  int flag =0;
//  for(int i=0;i<n;i++){
//   cin>>a>>b;
//   if(a<b) {
//   cout<<"Happy Alex"<<endl;
//   flag =1;
//   break;
//   }
//  }
//  if(flag==0){
//  cout<<"Poor Alex"<<endl;
//  }
 
 
// }

#include <bits/stdc++.h>
using namespace std;
void sol(){
    int s,t;
    cin>>s>>t;
    int idex=0;
    int p =s.size(),q=t.size();
    for(int j =0;j<q;j++){
        while(i<n && s[i]!=t[j])
        {
            if(s[i]=='?') {
                s[i] = t[j];
                break;
            }
            i++;
        }
        if(i<p && s[i]==t[j]){
            i++;
        }
        else{
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    while(i<p){
        if(s[i]=='?'){
            s[i]='a';
        }
        i++;
    }
    cout<<s<<endl;
}
int main() {
  ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int ; cin>>t;
while(t--){
    sol();
}
    return 0;
}