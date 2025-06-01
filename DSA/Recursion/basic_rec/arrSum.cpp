#include<bits/stdc++.h>
using namespace std;
 
#define nl endl
#define ll long long int
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define f first
#define s second
#define MOD 1000000007
 
#define vi vector<int>
#define vll vector<ll>
 
#define fr(i, a, b) for (ll i = a; i < b; i++)

int Asum(int i, int n, vi &nums) {
    if(i >= n) return 0;
    return nums[i] + Asum(i+1, n, nums);
}
void sol()
{
  vi nums = {1, 4, 3, 7};
  int n = nums.size();
  cout<<Asum(0,n, nums)<<nl;;
}
int main()
{
 int t=1; cin>>t;
 while(t--)
 sol(); 
}