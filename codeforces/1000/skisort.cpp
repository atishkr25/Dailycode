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

#define fr(i, a, b) for (int i = a; i < b; i++)
#define frr(i, a, b) for (int i = a; i > b; i--)

void sol()
{
    int n,q; cin>>n>>q;

    map<int,int>mp_loc; 
    map<int,int>mp_nest; 
    int ans = 0; 


    fr (i, 1, n+1)
    {
        mp_loc[i] = i; 
        mp_nest[i] = 1;      
    }

    vector<int> brr; 
    while (q--){
    int x; cin>>x;

    if (x == 1) 
    {
        int p,h;
        cin>>p>>h;
        int c = mp_loc[p];

        mp_nest[c]--;
        if (mp_nest[c] == 1) ans--;
        if (mp_nest[c] == 0) mp_nest.erase(c);

        mp_nest[h]++;
        if (mp_nest[h] == 2) ans++;
        mp_loc[p] = h;
    } 
    else if (x == 2) {
        brr.push_back(ans);
    }
}

    for(auto x:brr) cout <<x<<nl;

}

int main()
{
    // int t;
    // cin>>t;
    // while (t--)
        sol();
}
