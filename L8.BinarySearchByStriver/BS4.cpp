#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int peakIndex (vector<int> arr, int n){
    int start = 0;
    int end = n-1;
    int peak = -1;
    while (start<=end){
        int mid = start+(end-start)/2;
        if (arr[0]>arr[mid]){
            end = mid-1;
        }
        else if(arr[0] < arr[mid]){
            peak = mid;
            start = mid+1;
        }
    }
    return peak;
}

int findX(vector<int> arr, int n, int x, int peak){
    int start = peak+1;
    int end = n-1;
    int ans = -1;
    while (start<=end){
        int mid = start+(end-start)/2;
        if (arr[mid]==x){
            ans = mid;
            return ans;
        }
        else if (x > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return ans;
}

int findY(vector<int> arr, int n, int x, int peak){
    int start = 0;
    int end = peak;
    int ans = -1;
    while (start<=end){
        int mid = start+(end-start)/2;
        if (arr[mid]==x){
            return mid;
        }
        else if (x > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return ans;
}

int main () {
    vector<int> arr ({7,8,9,1,2,3,4,5,6});
    int n = arr.size();
    int x = 8;
    int peak = peakIndex(arr, n);
    if (arr[0]<=x){
        
        cout<<findY(arr, n, x, peak);
    }
    else {
        cout<<findX(arr, n, x, peak);
    }
    
}