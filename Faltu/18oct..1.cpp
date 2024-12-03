#include<bits/stdc++.h>
using namespace std;
int main(){
int t; cin>>t; 
while(t--){ 
long long int l, r;

cin >> l >> r;
long long ans = 1, mx = 0;

for (int i = l; i <= r; i++)
{

string x = to_string(i);

sort(x.begin(), x.end()); long long int diff = x.back() - x[0];

if (diff > mx)
{
mx = diff;
ans = i;
}

if (mx == 9)
{
break;
}


}

cout << ans << endl;
}
}