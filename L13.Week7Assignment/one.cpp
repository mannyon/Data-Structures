#include <iostream>
#include <vector>

using namespace std;

void func(int n, int& sum, int i){
    //base case


    //recursive calls
    while (i*i<=n){
        sum += 1;
        if(n >= i*i){
           return func(n-(i*i), sum, i+1);
        }
    }
    
}

void findSumSub(vector<int>&arr, vector<int>&ans, vector<int>&sumArr, vector<vector<int>>&fullAns, int ind, int sum){

    if(ind >= arr.size()){
        for(auto num:sumArr){
            if(num == sum){
                return;
            }
        }
        fullAns.push_back(ans);
        sumArr.push_back(sum);
        return;
    }


    ans.push_back(arr[ind]);
    findSumSub(arr, ans, sumArr, fullAns, ind+1, sum+arr[ind]);
    ans.pop_back();
    findSumSub(arr, ans, sumArr, fullAns, ind+1, sum);
}

int main() {
    vector<int> arr = {0};
    vector<int> ans;
    vector<int> sumArr;
    vector<vector<int>>fullAns;
   
    
    findSumSub(arr, ans, sumArr, fullAns, 0, 0);
    for(int i=0; i<fullAns.size(); i++){
        for(int j=0; j<fullAns[i].size(); j++){
            cout<<fullAns[i][j];
        }
        cout<<endl;
    }

}