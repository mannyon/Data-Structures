#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (){
    vector<int> arr ({1,2,3,4});
    vector<int> ans;
    int k = 2;
    for(int i=0; i<arr[arr.size()-1]*k; i++){
        ans.push_back(i+1);
        cout<<ans[i]<<" ";
    }
    

}