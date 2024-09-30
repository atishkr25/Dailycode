#include <iostream>
#include <vector>
using namespace std;
int main() {
 ios_base::sync_with_stdio(false);cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif

    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k;  // Read n (number of people) and k (threshold)

        vector<int> gold_amounts(n);
        for (int i = 0; i < n; i++) {
            cin >> gold_amounts[i];  // Read gold amounts for each person
        }

        int robin_gold = 0;
        int count_given_gold = 0;

        for (int i = 0; i < n; i++) {
            int ai = gold_amounts[i];  // Get the gold of the current person

            if (ai >= k) {
                robin_gold += ai;  // Robin takes all gold
            } else if (ai == 0 && robin_gold > 0) {
                robin_gold -= 1;  // Robin gives 1 gold
                count_given_gold++;  // Count this person as receiving gold
            }
        }

        cout << count_given_gold << endl;  // Output the number of people receiving gold
    }

    return 0;
}
