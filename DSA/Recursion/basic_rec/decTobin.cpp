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

int Dectobin(int n) {
    if(n == 0) return 0;
    return (n%2 + 10 * Dectobin(n/2));
}
void sol()
{
    int n = 15;
    cout<<Dectobin(n)<<nl;

    // int n = 100;
    // vi bin;
    // while(n > 0){
    //     bin.pb(n%2);
    //     n /= 2;
    // }
    // reverse(bin.begin(), bin.end());
    // for(auto x : bin)
    // cout<<x;
}
int main()
{
 int t = 1; cin>>t;
 while(t--)
 sol(); 
}