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

int GCD(int a, int b){
    if(b == 0) return a;
    GCD(b, a%b);
}

void sol()
{
  cout << GCD(35, 15) << endl;
  cout << GCD(12, 16) << endl;
}
int main()
{
    sol(); 
}