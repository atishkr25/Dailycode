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
#define vc vector<char>
 
#define fr(i, a, b) for (ll i = a; i < b; i++)

//Finding the Maximum of All Subarray Of Size K :------------
void sol()
{
    vector<int> a = {1, 3, -1, -3, 5, 3,6, 7};
    int k = 3;
    int n = a.size();
    vector<int> ans; // 3 3 5 5 6 7
    int i = 0;
    int j = 0;
    int mx = INT_MIN;
    while(j < n) {
        if(j-i+1 < k) {
            mx = max(mx, a[j]);
            j++;
        }

        else if(j-i+1 == k) {
            ans.push_back(mx);
            i++;
            j++;
            mx = max(mx, a[i]);

            if(j<n) mx = max(mx, a[j]);
            
        }
    }
    for(auto x : ans) cout<<x<<" ";
    cout<<endl;
}
int main()
{
 sol(); 
}