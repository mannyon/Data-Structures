#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int partition(vector<int>&arr, int start, int end){
    int pos = start;

    for(int i=start; i<=end; i++){
        if(arr[i] <= arr[end]){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quickSort(vector<int>&arr, int start, int end){
    if(start >= end) return;

    int pivot = partition(arr, start, end);

    quickSort(arr, start, pivot-1);
    quickSort(arr, pivot+1, end);
}

int main() {
    vector<int>arr = {8,7,6,5,4,3};

    quickSort(arr, 0, arr.size()-1);

    cout<<"working well"<<endl;

    for(auto e:arr){
        cout<<e<<" ";
    }
}