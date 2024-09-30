#include <bits/stdc++.h>
void rotatearr(int arr[],int n,int d){
 int newsize = n-d;
 int temp[d];
 for(int i=0;i<d;i++) temp[i]=arr[i];
 
 for(int i=d;i<n;i++){
     arr[i-d]=arr[i];
 }
 for(int i=newsize;i<n;i++){
     arr[i]=temp[i-newsize];
 }
}
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif
  
 int arr[]={1,2,3,4,5,6,7};
 int n=sizeof(arr)/sizeof(arr[0]);
 int d=3;
 
 rotatearr(arr,n, d);

 for(auto it:arr) cout<<it<<" ";
    return 0;
}