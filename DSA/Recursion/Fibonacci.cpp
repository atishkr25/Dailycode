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

int f(int n) {
    if(n <= 1) return n;
    int last = f(n-1);
    int slast = f(n-2);
    return last + slast;
}
void sol()
{
    int n; cin>>n;
    cout<<f(n)<<endl;
}
int main()
{
 int t=1;
 while(t--)
 sol(); 
}