#include <iostream>
#include <vector>

using namespace std;

void findSumsub(int arr[], int ind, int size, int sum, vector<int>&ans){
    if(ind >= size){
        ans.push_back(sum);
        return;
    }

    findSumsub(arr, ind+1, size, sum + arr[ind], ans);

    findSumsub(arr, ind+1, size, sum, ans);
}

int main() {
    int arr[] = {5, 2, 1};
    vector<int>ans;
    int sum = 0;
    findSumsub(arr, 0, 3, sum, ans);
    for(auto num:ans){
        cout<<num<<" ";
    }
}