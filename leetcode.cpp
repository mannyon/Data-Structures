#include <iostream>
#include <vector>
using namespace std;

void rotate (vector<int> &nums, int n, int k){
    vector<int> temp;
   for (int i=0; i<k; i++){
    temp.push_back(nums[n-(k)]);
    k--;
   }

    for (int i=n-1; i>0; i--){
        nums[i] = nums[i-k];
    }

    
    for (int i=0; i<k; i++){
        cout<<temp[i]<<" ";
    }
}

int missingNumber (vector<int> &nums, int n){
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (nums[i] > nums[j]){
                swap (nums[i], nums[j]);
            }
        }
    }

    for (int i=0; i<n; i++){
        if (nums[i] != i){
            return i;
        }
        else if (nums[n-1]==i){
            cout<<i+1;
        }
    }
}


int main () {
    vector <int> nums = {0,1};
    int n = nums.size();

    int ans = missingNumber(nums, n);
    

    // int n = nums.size();
    // int k = 3;

    // rotate (nums, n, k); 
}