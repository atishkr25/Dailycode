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

void sol()
{
    int n; cin >> n;
    string s; cin >> s;

    int cnt = 1, mx = 0;
    fr(i, 1, n) 
    {
        if (s[i] == s[i - 1]){
            cnt++;
        } else {
            mx = max(mx, cnt);
            cnt = 1; 
        }
    }
    mx = max(mx, cnt);

    cout << mx+1 << endl;
}
int main()
{
  int t; cin>>t;
  while(t--)
  sol(); 
}