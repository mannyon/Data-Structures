#include <iostream>
#include <vector>

using namespace std;

bool findSubSum(int arr[], vector<int>&ans, int size, int k, int ind, int&sum){
    if(ind >= size){
        if(sum == k){
            for(auto num:ans){
                cout<<num<<" ";
            }
            cout<<endl;
            return true;
        }
        else return false;
    }

    ans.push_back(arr[ind]);
    sum+=arr[ind];
    if(findSubSum(arr, ans, size, k, ind+1, sum) == true){
        return true;
    }

    ans.pop_back();
    sum-=arr[ind];

    if(findSubSum(arr, ans, size, k, ind+1, sum) == true) return true;

    return false;
}

int findNumOfSubSeqSum(int arr[], int size, int k, int ind, int&sum){
    if(ind >= size){
        if(sum == k) return 1;
        else return 0;
    }


    
    sum+=arr[ind];

    int l = findNumOfSubSeqSum(arr, size, k, ind+1, sum);
    
    sum-=arr[ind];

    int r = findNumOfSubSeqSum(arr, size, k, ind+1, sum);

    return l + r;
}

int main() {
    int arr[] = {1, 2, 1};
    int size = 3;
    vector<int>ans;
    int k = 2;
    int ind = 0;
    int sum = 0;
    cout<<findNumOfSubSeqSum(arr, size, k, ind, sum);
    // findSubSum(arr, ans, size, k, ind, sum);
}