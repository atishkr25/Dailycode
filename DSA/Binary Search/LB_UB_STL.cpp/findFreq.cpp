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
#define vc vector<char>
 
#define fr(i, a, b) for (ll i = a; i < b; i++)
int LowerBound(vi &a, int x){
    auto it = lower_bound(a.begin(), a.end(), x);
    if (it == a.end() || *it != x) return -1;
    return it-a.begin(); 
}

void sol()
{
    //find the freq of the number 7
    vi a = {2,3,7,9,8,6,5,7,1,7};
    int x = 10;

    sort(all(a));
    int lb = LowerBound(a, x);
    if(lb != -1){
        int up = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout<< up-lb <<nl;
        return;
    }
    cout<< 0 <<nl;

}
int main()
{
 sol(); 
}