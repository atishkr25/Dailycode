// bubble up the largest element at the end 

#include <bits/stdc++.h>
using namespace std;
int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif

    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // outer iteration 
    for(int i=1;i<n;i++){
            bool sorted = false;
        // inner iteration for cheking the max and send it in the last of the array 
        for(int j=0;j<n-i;j++){
            if(a[j] >a[j+1]){
                swap(a[j],a[j+1]);
                sorted= true;
            }
        }
        // if(sorted == false ) { cout<<"already sorted"; break; }
    }
    for(auto x: a){
        cout<<x<<" ";
    }
    

    return 0;
}