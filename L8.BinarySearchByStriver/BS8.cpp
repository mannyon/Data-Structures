#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int isPossibleSol(vector<int>&arr, int mhr, int reqTime, int n){
    int hr = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<=reqTime){
            hr++;
        }
        else if(arr[i]>reqTime && arr[i]%reqTime==0){
            hr = hr+arr[i]/reqTime;
        }
        else if(arr[i]>reqTime && arr[i]%reqTime != 0){
            hr = hr + arr[i]/reqTime + 1;
        }
    }
    if (hr <= mhr){
        return true;
    }
    else {
        return false;
    }
}

int main () {
    vector<int> arr ({30,11,23,4,20});
    int mhr = 5;
    int ans = -1;
    int n = arr.size();
    int maxEl = *max_element(arr.begin(), arr.end());
    int start = 1;
    int end = maxEl;
    while (start<=end){
        int mid = start+(end-start)/2;
        if(isPossibleSol(arr, mhr, mid, n)){
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    cout<<ans;
}