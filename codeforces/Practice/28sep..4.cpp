//Returning the indexes of two element whose sum is equal to target 
// Two pointer approach 

#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
int left = 0;
int right =nums.size() - 1;

while (left<right) {
    int sum = nums[left] + nums[right];

    if (sum == target) {
        return {left, right};
    } else if (sum < target) {
        left++;
    } else {
        right--;
    }
}

return {-1, -1};
}

int main() {
vector<int> nums = {2,7,11,15};
int target = 9; 

vector<int> result = twoSum(nums, target);

cout << "Indices of the two numbers that add up to " << target << ": ";
cout << result[0]<<"and"<< result[1] << endl;

return 0;
}