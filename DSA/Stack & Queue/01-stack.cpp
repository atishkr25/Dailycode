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
   stack<int> st;
   st.push(10);
   st.push(145);
   st.push(15);
   st.push(11);

    while(!st.empty()) {
        cout<< st.top() <<endl;
        st.pop();
    }
}
int main()
{
 sol(); 
}