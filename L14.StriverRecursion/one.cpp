#include <iostream>
#include <vector>

using namespace std;

bool help(int ind, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans, int sum, int k) {
    // Base case: if we have found k subsets, return true
    if (ans.size() == k) {
        return true;
    }

    // If the current subset sum is zero and it's not empty, add it to the answer
    if (sum == 0 && !ds.empty()) {
        ans.push_back(ds);
        // Reset the current subset and sum, and start from the beginning to find the next subset
        return help(0, nums, ds = vector<int>(), ans, sum, k);
    }

    // If we reach the end of the array or the sum becomes negative, return false
    if (ind == nums.size() || sum < 0) {
        return false;
    }

    // Include the current element in the subset and recurse
    ds.push_back(nums[ind]);
    if (help(ind + 1, nums, ds, ans, sum - nums[ind], k)) {
        return true;
    }
    // Exclude the current element from the subset and recurse
    ds.pop_back();
    if (help(ind + 1, nums, ds, ans, sum, k)) {
        return true;
    }

    return false;
}

int main() {
    vector<int> nums = {2, 2, 2, 2, 3, 4, 5};
    int k = 4;
    int totalSum = 0;

    for (auto num : nums) {
        totalSum += num;
    }

    if (totalSum % k != 0) {
        cout << "not possible" << endl;
        return 0;
    }

    int sum = totalSum / k;
    vector<int> ds;
    vector<vector<int>> ans;

    bool mainAns = help(0, nums, ds, ans, sum, k);

    cout << mainAns << endl;

    return 0;
}
