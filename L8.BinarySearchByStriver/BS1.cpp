#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(int arr[], int start, int end){
    int target = 145;
    int mid = (start + end)/2;
    if (start > end){
        return -1;
    }
    else if (target == arr[mid]){
        return mid;
    }
    else if (target > arr[mid]){
       return binarySearch(arr, mid+1, end);
    }
    else {
       return binarySearch(arr, start, mid-1);
    }
}

int main () {
    int arr[] = {3,4,6,7,9,12,16,17};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = n-1;
    int ans = binarySearch(arr, start, end);
    cout<<ans;
}