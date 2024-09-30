#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin>>t;
    
     while(t--){
         int n;
         cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        
        int mini = *min_element(a.begin(),a.end());
        int x=n-1;
        for(int i=n-1;i>=0;i--){
         if(a[i]==a[x]){
             x--;
         }
         else{
             cout<<mini+a[i]<<endl;
             break;
         }
        }
     }
}
