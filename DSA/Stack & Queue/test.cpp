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

void sol()
{   
    vi a = {4, 5, 3, 2, 1, 18, 5, 20, 1, 6};
    int n =  a.size();
    int mx = INT_MIN;
    fr(i, 0, n-2) {
        int sum = 0;
        fr(j, i, i+3) {
            sum += a[j];
            mx = max(mx, sum);
        }
    }
    cout<<mx<<nl;
}
int main()
{
 sol(); 
}