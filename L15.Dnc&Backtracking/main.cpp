#include <iostream>
#include <vector>


using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s+e)/2; 

    int lenLeft = mid - s + 1;
    int lenRight = e - mid;


    int *left = new int[lenLeft];
    int *right = new int[lenRight];

    int k = s;

    for(int i=0; i<lenLeft; i++){
        left[i] = arr[k];
        k++;
    }

    k = mid+1;

    for(int i=0; i<lenRight; i++){
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = s;

    while(leftIndex < lenLeft && rightIndex < lenRight){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainIndex] = left[leftIndex];
            leftIndex++;
            mainIndex++;
        }
        else{
            arr[mainIndex] = right[rightIndex];
            rightIndex++;
            mainIndex++;
        }
    }

    while(leftIndex < lenLeft){
        arr[mainIndex] = left[leftIndex];
        leftIndex++;
        mainIndex++;
    }

    while(rightIndex < lenRight){
        arr[mainIndex] = right[rightIndex];
        rightIndex++;
        mainIndex++;
    }

    delete [] left;
    delete [] right;

}

void mergeSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }

    int mid = (s+e)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main() {
    int arr[] = {5,2,6,2,4,3};
    int size = 6;
    int s = 0;
    int e = size-1;

    mergeSort(arr,s,e);

    for(auto num:arr){
        cout<<num<<" ";
    }
}