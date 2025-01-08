// #include <bits/stdc++.h>
// using namespace std;

// void sol() {
//     long long int n; 
//     cin >> n;
//     vector<int> a(n);
//     for(int i = 0; i < n; i++) 
//         cin >> a[i];

//     vector<int> temp = a; // Create a copy of a
//     sort(temp.begin(), temp.end()); // Sort the copy

//     if (temp == a)
//         cout << "0" << endl;
//     else if (a[0] == n && a[n - 1] == 1)
//         cout << "3" << endl;
//     else if (a[0] == 1 || a[n - 1] == n)
//         cout << "1" << endl;
//     else 
//         cout << "2" << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif

//     long long int t; 
//     cin >> t;
//     while (t--) {
//         sol();
//     }
// }


// 
#include<bits/stdc++.h>
using namespace std;
void sol(){
    string s; cin>>s;
    vector<char> c;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+') c.push_back(s[i]);
    }
    sort(c.begin(),c.end());
    for(int i=0;i<c.size();i++){
        if(i==c.size()-1) cout<<c[i];
        else {
        cout<<c[i]<<"+";
        }
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
sol();
 
}