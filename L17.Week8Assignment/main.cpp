#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(int arr[], int start, int mid, int end){

    vector<int>temp(end - start + 1);

    int left = start;
    int right = mid+1;
    int index = 0;

    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            temp[index++] = arr[left++];
        }
        else{
            temp[index++] = arr[right++];
        }
    }

    while(left <= mid){
        temp[index++] = arr[left++];
    }

    while(right <= end){
        temp[index++] = arr[right++];
    }

    index = 0;

    while(start <= end){
        arr[start++] = temp[index++];
    }

}

void mergeSort(int arr[], int start, int end){

    if(start == end) return;

    int mid = start + (end - start) / 2;

    //left side
    mergeSort(arr, start, mid);
    //right side
    mergeSort(arr, mid+1, end);
    //merge
    merge(arr, start, mid, end);
}

int main() {
    int arr[] = {9,4,7,2,6,51,1};

    mergeSort(arr, 0, (sizeof(arr)/sizeof(arr[0]))-1);


    for(auto num:arr){
        cout<<num<<" ";
    }
}