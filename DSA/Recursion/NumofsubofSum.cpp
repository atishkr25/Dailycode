#include<bits/stdc++.h>
using namespace std;
 
#define nl endl
#define ll long long int
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
// #define f first
// #define s second
#define MOD 1000000007
 
#define vi vector<int>
#define vll vector<ll>
 
#define fr(i, a, b) for (ll i = a; i < b; i++)

int Count(int i, int s, int sum, vi &a, int cnt) {
    if(i >= a.size()) {
        if(s == sum) return cnt+1;
        else return cnt;
    }
    s += a[i];
    cnt = Count(i+1, s, sum, a, cnt);

    s-= a[i];
    cnt = Count(i+1, s, sum, a, cnt);

    return cnt;
}
void sol()
{
    vi a = {1, 2, 1};
    int n = a.size();
    int sum = 2;
    // vi ds;
    int cnt = 0;
    cout<< Count(0, 0, sum, a, cnt);
}
int main()
{
 int t = 1;
 while(t--)
 sol(); 
}