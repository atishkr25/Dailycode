#include<bits/stdc++.h>
using namespace std;

void findUnion(vector<int> &a, vector<int> &b) {
    set<int> st;
    
    
    for (int i = 0; i < a.size(); i++) {
        st.insert(a[i]);
    }
    for (int i = 0; i < b.size(); i++) {
        st.insert(b[i]);
    }

    
    
    for (auto it : st) {
        cout << it << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector<int> a = {1, 1, 2, 3, 4};
    vector<int> b = {2, 2, 3, 4, 5,9,20,15,34,12};

    findUnion(a, b);

    return 0;
}
