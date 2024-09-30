#include<bits/stdc++.h>
using namespace std;
 void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
       if(j!=-1){
        for(int i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
                
            }
        }
       }
       else return;
      
 }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
 
 vector<int>nums = {1,1,1,2};
 moveZeroes(nums);

 for(auto it: nums)
 cout<<it<<" ";
 
 
}