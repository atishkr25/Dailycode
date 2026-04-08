#include <bits/stdc++.h>
using namespace std;
#define fast_io cin.sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long

vector<vector<string>> ans;

bool isvalid(int row, int col, vector<string> &path, int n){
    int drow = row;
    int dcol = col;

    while(row >=0 && col >= 0) {
        if(path[row][col] == 'Q') return false;
        row--;
        col--;
    }
    row=drow;
    col=dcol;
    while(col >= 0){
        if(path[row][col] == 'Q') return false;
        col--;
    }
    row=drow;
    col=dcol;
    while(row<n && col >= 0){
        if(path[row][col] == 'Q') return false;
        row++;
        col--;
    }
    return true;
}

void atish(int col, vector<string> &path, int n){
    if(col == n){
        ans.push_back(path);
        return;
    }

    for(int i=0; i<n; i++){
        if(isvalid(i, col, path, n)){
            path[i][col] = 'Q';
            atish(col+1, path, n);
            path[i][col] = '.';
        }
    }
}

void sol() {
    int n; cin>>n;

    vector<string> path(n, string(n, '.'));

    atish(0, path, n);

    for(auto x : ans){
        for(auto it : x) cout<< it <<endl;
    }
}

int32_t main() {
    fast_io;
    sol();
}