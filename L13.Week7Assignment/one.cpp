#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int fibonacci(int n){
    if(n <= 1){
        return n;
    }

    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last + slast;
}

void func(int arr[], vector<int>&ans, int ind, int size){
    //base case
    if(ind >= size){
        for(auto num:ans){
            cout<<num<<" ";
        }
        cout<<endl;
        return;
    }

    //recursive call
    ans.push_back(arr[ind]);
    func(arr, ans, ind+1, size);
    ans.pop_back();
    func(arr, ans, ind+1, size);
}

int main() {
    int arr[] = {3,1,2};
    vector<int>ans;
    func(arr, ans, 0, 3);
}