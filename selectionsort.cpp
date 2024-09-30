// select the minimum and swap 
#include<bits/stdc++.h>
using namespace std;

void sol(){
    int n; cin>>n;
    vector<int > a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n-1;i++){
        int mini= i;
        for(int j=i+1;j<n;j++){
            if(a[j]< a[mini]){
                mini= j;
            }
        }
        swap(a[i] , a[mini]);
}
// for( int i=0;i<n;i++) cout<<a[i]<<" ";
for(auto x: a)
cout<<x<<" ";
}
int main()
{
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