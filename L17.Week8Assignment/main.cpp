#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

void findMin(int index, int arr[], int n, int &minArr){
    if(index >= n){
        return;
    }

    if(arr[index] < minArr){
        minArr = arr[index];
    }
    findMin(index+1, arr, n, minArr);

}

int main() {
    int arr[] = {7,2,4,5,6};
    int minArr = INT_MAX;
    findMin(0, arr, 5, minArr);
    cout<<minArr<<endl;
}