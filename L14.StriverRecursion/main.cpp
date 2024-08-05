#include <iostream>
#include <vector>

using namespace std;

void findComb(int i, int k, int n, vector<int>&ds, vector<vector<int>>&ans){
    //base case
    if(i >= n-i){
        return;
    }
    
    
    //recursion

    if(ds.size() > 0){
        for(int i=1; i<=k; i++){
            ds.pop_back();
        }
    }
    

    if(i < n-i){`
        ds.push_back(i);
        ds.push_back(n-i);
        ans.push_back(ds);
        findComb(i+1, k, n, ds, ans);
    }
}

int main() {
    int k = 3;
    int n = 9;
    vector<int>ds;
    vector<vector<int>>ans;

    findComb(1, k, n, ds, ans);
    
   
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}