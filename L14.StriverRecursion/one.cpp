#include <iostream>
#include <vector>

using namespace std;

void func(int ind, vector<int>&arr, vector<int>&ds, int target, vector<vector<int>>&ans){
    
    if(ind >= arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }

    if(arr[ind] <= target){
        ds.push_back(arr[ind]);
        func(ind, arr, ds, target-arr[ind], ans);
        ds.pop_back();
    }

    func(ind+1, arr, ds, target, ans);
}

int main() {
    vector<int>candi = {2,3,5};
    int target = 8;
    vector<vector<int>> ans;
    vector<int>ds;
    func(0, candi, ds, target, ans);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}