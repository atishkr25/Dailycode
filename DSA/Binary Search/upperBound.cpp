#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int getupperBnd(vector<int> &a, int num){
  int l=0,h=a.size()-1;
  int mid;
  while(h-l>1){
    int mid = (h+l)/2;
    if(num >= a[mid])
      l=mid+1;
    else
      h=mid;
  }
  if(a[l]>num){
    return l;
  }else if(a[h]>num){
    return h;
  }else return -1;
  
}
int main()
{
  int n; cin>>n;
 vector<int> a(n);
 for(auto &x: a) cin>>x;

 int num; cin>>num;

 int ans = getupperBnd(a, num);
 cout<< ans << " " << a[ans] << endl;

}