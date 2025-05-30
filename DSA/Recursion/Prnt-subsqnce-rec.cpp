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

void PrntSubsequense(int i, vi &ds, vi &a, int n) {
    if(i >= n){
        for(auto x : ds){
            cout<<x<<" ";
        }
        cout<<nl;
        return;
    }
    ds.push_back(a[i]);
    PrntSubsequense(i+1, ds, a, n);
    ds.pop_back();
    PrntSubsequense(i+1, ds, a, n);
}
void sol()
{
    vi a = {3,1,2};
    int n = a.size();
    vi ds;
    PrntSubsequense(0, ds, a, n);

}
int main()
{
 int t = 1;
 while(t--)
 sol(); 
}