#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

void findElem(vector<int>&arr, int ind, int sum, int &totalElem){
    if(sum == 0){
        totalElem ++;
        return;
    }

    if(ind == arr.size() || sum < 0){
        return;
    }

    findElem(arr, ind+1, sum - arr[ind], totalElem);
    findElem(arr, ind+1, sum, totalElem);
}


int main() {
    vector<int>arr = {5,2,3,6,10,8};
    int sum = 10;
    int totalElem = 0;
    findElem(arr, 0, sum, totalElem);
    cout<<totalElem<<endl;
}