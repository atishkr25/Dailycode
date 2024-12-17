#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> a = {2,0,2,1,1,0};
    int n = a.size();
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    int x = mp[0];  
    int y = mp[1]; 
    int z = mp[2];  

   
    for (int i = 0; i < x + y + z; i++) {
        if (i < x) {
            cout << "0 ";
        } else if (i < x + y) {
            cout << "1 ";
        } else {
            cout << "2 ";
        }
    }

    cout << endl; 
    return 0;
}
