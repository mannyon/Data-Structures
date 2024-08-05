#include <iostream>
#include <vector>

using namespace std;

void func(int ind, vector<int>&arr, vector<int>&ds, vector<vector<int>>&ans, int target){
    //base case


    //recursion
    for(int i=ind; i<arr.size(); i++){
        if(arr[i] > target){
            break;
        }
        ds.push_back(arr[i]);
        func(ind+1, arr, ds, ans, target);
        ds.pop_back();
        func(ind+1, arr, ds, ans, target);
    }
}

int main() {
    vector<int>arr = {1,1,1,2,2};
    vector<vector<int>>ans;
    vector<int>ds;
    func(0, arr, ds, ans, 4);
}