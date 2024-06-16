#include <iostream>
#include <vector>

using namespace std;

void findAllPossibilities(int arr[], vector<int>&ans, int t, int size, int ind){
    if(ind >= size){
        if(t == 0){
            for(auto num:ans){
                cout<<num<<" ";
            }
            cout<<endl;
        }
        return;
    }   
    if(t < 0){
        return;
    }

    ans.push_back(arr[ind]);
    t-=arr[ind];
    findAllPossibilities(arr, ans, t, size, ind);

    ans.pop_back();
    t+=arr[ind];
    findAllPossibilities(arr, ans, t, size, ind+1);
}


int main() {
    int arr[] = {2};
    vector<int> ans;
    int t = 1;
    findAllPossibilities(arr, ans, t, 1, 0);
}