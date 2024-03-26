#include <iostream>
using namespace std;

// void triplets (int arr[], int n){
//     for (int i=0; i<n; i++){
//         for (int j=0; j<n; j++){
//             for (int m=0; m<n; m++){
//                 cout<<arr[i]<<", "<<arr[j]<<", "<<arr[m]<<endl;
//             }
//         }
//     }
// }

void shiftArray (int arr[], int n){


     int temp[]= {arr[n-2], arr[n-1]};
    int k = 2;

    for (int i=n-1; i>=0; i--){
        arr[i] = arr[i-2];
    }
    arr[0] = temp[0];
    arr[1] = temp[1];

   
    
}

int main () {

    int arr[] = {10,20,30,40,50,60};
    int n = 6;
   
   shiftArray (arr, n);

      for (int i=0; i<n; i++){
         cout<<arr[i]<<" ";
     }

    // for (int i=0; i<n; i++){
    //     for (int j=n-1; j>i; j--){
    //         if (arr[i] > arr[j]){
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    // }

    // for (int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    // int arr[] = {1,2,3,4};
    // int n = 4;

    // triplets (arr, n);

    // int arr[] = {10,20,30};
    // int n = 3;

    // allPairs (arr, n);

    // int arr[] = {2,10,11,13,10,2,15,13,15};
    // int n = 9;

    // int finalAns = uniq(arr, n);
    // cout<<"final ans: "<<finalAns
}