#include<bits/stdc++.h>
using namespace std;

void sol(){
string s; cin>>s;
int n = s.size();
if(n<=2 ) { cout<<"NO"<<endl; return; }

if(s[0]=='1' && s[1]=='0'){
    string str1= "";
    for(int i=2;i<n;i++){
        str1= str1 + s[i];
    }
    if(str1=="1" || str1[0]=='0') {
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif
 
 int t; cin>>t; 
 while(t--){
    sol();
 }
 
}