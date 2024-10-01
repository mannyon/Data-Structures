#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

void findPermutation(int ind, vector<int>&arr, vector<int>&ds){

    if(ind >= arr.size()){
        for(auto e:arr){
            cout<<e<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i = ind; i<arr.size(); i++){
        swap(arr[i], arr[ind]);
        findPermutation(ind+1, arr, ds);
        swap(arr[i], arr[ind]);
    }
}


void permut(vector<int>&arr, vector<int>&temp, vector<vector<int>>&ans, vector<bool>&visited){
    if(temp.size() == arr.size()){
        ans.push_back(temp);
        return;
    }

    for(int i=0; i<arr.size(); i++){
        if(visited[i] == 0){
            visited[i] = 1;
            temp.push_back(arr[i]);
            permut(arr, temp, ans, visited);
            visited[i] = 0;
            temp.pop_back();
        }
    }
}


int main() {
    vector<int>arr = {1,2,3};
    vector<int>temp;
    vector<vector<int>>ans;
    vector<bool>visited(arr.size(), 0);



    permut(arr, temp, ans, visited);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    // findPermutation(0, arr, ds);
    
}