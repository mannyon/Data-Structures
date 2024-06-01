#include <iostream>

using namespace std;

void printArray(int arr[], int n){
    if(n==0){
        return;
    }
    cout<<*arr<<" ";
    printArray(arr+1, n-1);

}

void printArrayUsingIndex(int arr[], int n, int i){
    if(i >= n){
        return;
    }
    cout<<arr[i]<<" ";
    printArrayUsingIndex(arr, n, i+1);
}

bool searchArray(int arr[], int size, int index, int target){
    if(index >= size){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    else {
        searchArray(arr, size, index+1, target);
    }
}

int main() {

    int arr[] = {10,20,30,40,50};
    int ans = searchArray(arr, 5, 0, 50);
    if(ans == 1){
        cout<<"Target found";
    }
    else {
        cout<<"Target not found";
    }
    // printArrayUsingIndex(arr, 5, 0);
    // printArray(arr, 5);

    // int prev1 = 0;
    // int prev2 = 1;
    // int prev3;
    // cout<<prev1<<" "<<prev2<<" ";
    // while(prev3<13){
    //     prev3 = prev1 + prev2;
    //     cout<<prev3<<" ";
    //     prev1 = prev2;
    //     prev2 = prev3;
    // }

    // for(int i=1; i<7; i++){
    //     int ans = prev1 + prev2;
    //     cout<<ans<<" ";
    //     prev1 = prev2;
    //     prev2 = ans;
    // }
}