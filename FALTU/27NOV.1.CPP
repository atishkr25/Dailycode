#include <bits/stdc++.h>
using namespace std;
void sol(){
 int n; cin>>n;
 string s; cin>>s;
 map<char,int>mp;
 for(int i=0;i<n;i++){
    mp[s[i]]++;
 }
 int maxi=0,mini=INT_MAX;
 char mx=' ',mn=' ';
 for(auto x:mp){
    if(x.second>maxi){
        mx=x.first;
        maxi=x.second;
    }
    else if(x.second<mini){
        mn=x.first;
        mini=x.second;
    }
 }
 for(int i=0;i<n;i++){
    if(s[i]==mn){ s[i]=mx;
    break;
    }
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
    int t;
    cin >> t;
    while (t--) 
    sol();
}
