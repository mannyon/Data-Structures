#include <iostream>
#include <vector>

using namespace std;

void func(int arr[], vector<int>&ans, int size, int ind, int target){
    if(ind >= size){
        if(target == 0){
            for(auto num:ans){
                cout<<num<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(target >= arr[ind]){
        ans.push_back(arr[ind]);
        func(arr, ans, size, ind, target - arr[ind]);
        ans.pop_back();
    }
    func(arr, ans, size, ind+1, target);
}

int main() {
    int arr[] = {2,3,5};
    vector<int>ans;
    int target = 8;
    int size = 3;
    func(arr, ans, size, 0, target);
}