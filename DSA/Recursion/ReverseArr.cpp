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

void randomFunction(int i, vector<int>&arr, int n) {
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    randomFunction(i+1, arr, n);
}
void sol()
{
    int n; cin>>n;
    vi a(n);
    for(auto &x : a) cin>>x;

    randomFunction(0, a, n);

    fr(i, 0, n) cout<< a[i] <<" ";

}
int main()
{
    int t= 1;
    while(t--)
    sol(); 
}