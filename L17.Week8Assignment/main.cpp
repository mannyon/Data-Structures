#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void helper(int i, vector<int>&arr, int target, vector<int>&ds, vector<vector<int>>&ans){
    
    if(target == 0){
        ans.push_back(ds);
        return;
    }


    if(target < 0 ) return;

    if(i >= arr.size()){
        return;
    }

    ds.push_back(arr[i]);
    helper(i, arr, target-arr[i], ds, ans);
    ds.pop_back();
    helper(i+1, arr, target, ds, ans);
}

int main() {
    vector<int>arr = {2,3,6,7};
    int target = 7;
    vector<int>ds;
    vector<vector<int>>ans;

    helper(0, arr, target, ds, ans);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}