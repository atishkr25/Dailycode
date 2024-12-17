//Binray search is only applicable for monotonic functions 
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  vector<int> v(n);
  for(auto &x:v) cin>>x;
  int num = 88;
  int lo = 0, hi = n - 1;
  int mid;
  while(hi - lo > 1){
    mid = (hi + lo) / 2;
    if(num <= v[mid]) hi = mid;
    else lo = mid + 1;
  }
  if(v[lo] == num) cout << lo << endl;
  else if(v[hi] == num) cout << hi << endl;
  else cout << "not found" << endl;
}
