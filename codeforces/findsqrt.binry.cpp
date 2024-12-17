// find the square root by applying binary search algo

#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

    int num = 25;
    int start = 0;
    int end = num/2; // Set end to num to include the potential square root

    while (start <= end) {
        int mid = (start + end) / 2;

        if (mid * mid == num) {
            cout << mid << endl;
            break;
        } else if (mid * mid > num) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
}
