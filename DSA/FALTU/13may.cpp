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


//codeforces 96A solution 
void sol()
{
  string s; cin>>s;
  string substr1 = "0000000";
  string substr2 = "1111111";

  if(s.find(substr1) != string::npos || s.find(substr2) != string::npos) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

}
int main()
{
  sol(); 
}