#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif

    int t; cin>>t;
    while(t--){ 
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        int cnt=0;
        int sum=0;
        for(int i= 0;i<n;i++){ 
            cin>>a[i];
            if(a[i]==0){
                cnt++;
            }
            else if(a[i]>=k){
            sum=sum+a[i];
            }
        }
        if(sum<cnt) cout<<sum<<endl;
        else {
            if(cnt==0) cout<<"0"<<endl;
            else cout<<cnt<<endl;
        }
    }
    return 0;
}