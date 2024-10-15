// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
 
// vector<int>a = {1,2,2,3,3,4,5,6,10,32,58,65};
// vector<int>b = {2,3,3,4,5,6,32,41};
// vector<int> c;
// int n = a.size();
// int m = b.size();
// int visit[m] = {0};

// for(int i=0;i<n;i++){
//   for(int j=0;j<m;j++){
//     if(a[i]==b[j] && visit[j] == 0){
//       c.push_back(a[i]);
//       visit[j]=1;
     
//     }
//   }
// }
// for(auto it: c) cout<<it<<" ";
// //  double d=10.122;
// //  cout<<int(d)<<endl;

// }



#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> a = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> b = {2, 3, 3, 4, 5, 6};
    vector<int> c;
    
    // Use a set for efficient lookup  , it will store all the element of vector be in unordered way only unique elements will be stored 
    unordered_set<int> bSet(b.begin(), b.end());

    for (int num : a) {
        if (bSet.count(num) > 0) {
            c.push_back(num);
            bSet.erase(num); // Remove that elemnt after finding, to avoid duplicates conflicts 
        }
    }

    for (auto it : c) cout << it << " ";

    return 0;
}
