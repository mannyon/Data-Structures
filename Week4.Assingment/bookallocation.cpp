#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int isPossilbe (vector<int> nums, int n, int m, int sol){
    int pageSum = 0;
    int c = 1;
    for (int i=0; i<n; i++){
        if (nums[i]>sol){
            return false;
        }
        if (pageSum+nums[i]>sol){
            c++;
            pageSum = nums[i];
            if (c>m){
                return false;
            }
        }
        else {
            pageSum+=nums[i];
        }
    }
    return true;
}

int main () {
    vector<int> nums ({15,17,20});
    int n = nums.size();
    int m = 2;
    if (m>n){
        cout<<-1<<endl;
    }

    int start = 0;
    int ans = -1;
    int end = 0;
    for (int i=0; i<n; i++){
        end += nums[i];
    }

    while (start<=end){
        int mid = start+(end-start)/2;
        if (isPossilbe(nums, n, m, mid)){
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid +1;
        }
    }
    cout<<ans;
}