#include <iostream>
#include <vector>

using namespace std;

bool help(int ind, vector<int>&buck, vector<int>&ds, vector<vector<int>>&ans, int sum, int k){
    //base case 

    if(ans.size() == k){
        return true;
    }

    if(sum == 0){
        ans.push_back(ds);
        return help(ind+1, buck, ds, ans, sum, k);
    }

    if(ind == buck.size()) return false;

    if(sum < 0) return false;

    
    sum -= buck[ind];
    ds.push_back(buck[ind]);
    int ans1 = help(ind+1, buck, ds, ans, sum, k);
    sum += buck[ind];
    ds.pop_back();
    
    int ans2 = help(ind+1, buck, ds, ans, sum, k);

    return ans1 | ans2;


}

int main() {
    vector<int> nums = {2,2,2,2,3,4,5};
    int k = 4;
    int totalSum = 0;


    for(auto num:nums){
        totalSum += num;
    }
    
    if(totalSum%k != 0){
        cout<<"not possible";
    }

    int sum = totalSum/k;
    vector<int>ds;
    vector<vector<int>>ans;


    int mainAns = help(0, nums, ds, ans, sum, k);

    cout<<mainAns<<endl;

    
}