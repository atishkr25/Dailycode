#include <iostream>
using namespace std;

bool isEven(int n, int k) {
    long long totalLeaves = n;
    
    // Calculate the starting year for the leaves that last until year n
    int start = max(1, n - k + 1);
    
    // Calculate the contribution from the previous years
    for (int i = start; i < n; ++i) {
        totalLeaves += i;
    }
    
    return totalLeaves % 2 == 0;
}

int main() {

  
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n, k;
        cin >> n >> k; // Read n and k
        if (isEven(n, k)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
