#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int findMin (vector<int> &nums,int start, int &x){
    int min = INT_MAX;

    for (int i=start; i<nums.size(); i++){
        if (abs(nums[i] - x < min)){
            min = abs(nums[i]-x);
        }
    }
    return min;
}

int main () {
    vector<int> nums ({10,36,37,12,22,21,35});
    int n = nums.size();
    int x = 26;
    

    int i=0;
    int j=1;

    while (j<n){
        if (nums[j]-x==findMin (nums,i, x)){
            swap(nums[i], nums[j]);
            i++, j=i+1;
        }
        else {
            j++;
        }
    }

    for (int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}