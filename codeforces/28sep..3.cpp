#include<bits/stdc++.h>
using namespace std;
int sol(vector<int>&nums,int k){
  int n=nums.size();
  for(int i=0;i<n;i++){
    if(nums[i]==k){
      return i;
    }
  }
  return -1;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 vector<int>nums= {7,5,8,4,1};
 int k = 4;
int ans = sol(nums,k);
cout<<ans <<endl;
 
}