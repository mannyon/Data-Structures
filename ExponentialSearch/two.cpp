#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bs (int arr[], int start, int end, int x){
    while (start<=end){
        int mid = start+(end-start)/2;
        if (arr[mid]==x){
            return mid;
        }
        else if (x > arr[mid]){
            start = mid+1;
        }
        else {
            end = end-1;
        }
    }
    return -1;
}

int unboundArray(int arr[], int n, int x){
    int i=0;
    int j=1;
    while (arr[j]<x){
        i=j;
        j=j*2;
    }
    return bs(arr, i, j, x);
}

int main () {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int x = 6;
    int n = sizeof(arr)/sizeof(int);

    int ans = unboundArray (arr, n, x);
    cout<<ans<<endl;
}