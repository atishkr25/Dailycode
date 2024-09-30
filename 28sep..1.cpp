#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif

    vector<int> nums = {1, 2, 3, 4};
    int k = 2;

    rotate(nums, k);

    for (auto x : nums) {
        cout << x << " ";
    }

    return 0;
}