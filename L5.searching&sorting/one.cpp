#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int findPivotIndex (vector<int> & nums, int n) {
    int s = 0;
    int e = n-1;
    int m = s+(e-s)/2;

    while (s<=e){
        if (s==e){
            return s;
        }
        else if (m-1>=0 && nums[m] < nums[m-1]){
            return m-1;
        }
        else if (m+1<n && nums[m] > nums[m+1]){
            return m;
        }
        else if (nums[s] <= nums [m]){
            s = m + 1;
        }
        else {
            e = m - 1;
        }
    }
    return -1;
}

int binarySearch (vector<int> &nums, int s, int e, int target) {
    int m = s+(e-s)/2;
    while (s<=e){
        if (nums[m]==target){
            return m;
        }
        else if (nums[m] > target){
            e = m-1;
        }
        else {
           s = m+1;
        }
        m = s+(e-s)/2;
    }
    return -1;
}

int main () {
    vector<int> nums;
    nums.push_back(12);
    nums.push_back(14);
    nums.push_back(16);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(6);
    nums.push_back(8);
    nums.push_back(10);

    int n = nums.size();
    int target = 2;
    int pivotIndex = findPivotIndex (nums, n);
    int ans = -1;
    
    if (target >=nums[0] && target <=nums[pivotIndex]){
        ans = binarySearch(nums, 0, pivotIndex, target);
    }
    else {
        ans = binarySearch(nums, pivotIndex+1, n-1, target);
    }

    cout<<ans;

}