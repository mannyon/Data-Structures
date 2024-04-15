#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long int isPossibleSolution(vector<long long int>arr, long long int M, long long int mid){
    long long int woodCollected = 0;
    for(long long int i=0; i<arr.size(); i++){
        if(arr[i] > mid){
            woodCollected+= arr[i] - mid;
        }
    }
    return woodCollected >= M;
}

long long int maxBladeHeight(vector<long long int>arr, long long int M){
    long long int start = 0, end, ans = -1;
    end = *max_element(arr.begin(), arr.end());
    while (start<=end){
        long long int mid = start+(end-start)/2;
        if(isPossibleSolution(arr, M, mid)){
            ans = mid;
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return ans;
}

int main () {
    vector<long long int> arr ({4, 42, 40, 26, 46});
    long long int trees = arr.size();
    long long int M = 20;

    cout<< maxBladeHeight(arr, M);

   
}