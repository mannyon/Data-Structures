#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

// void printArray (int arr[], int size) {
//     cout<<"Printing the Arrray"<<endl;
//     // print the array
//     for (int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"Printing Done"<<endl;
// }

// bool linearSearch (int arr[], int size, int target){
//     for (int i=0; i<size; i++){
//         if (arr[i]==target){
//             return true;
//         }
//     }
//     return false;
// }

// int findMinimumOfArray (int arr[], int size){
//     int maxAns = INT_MIN;
//     for (int i=0; i<size; i++){
//         if (arr[i] > maxAns){
//             maxAns = arr[i];
//         }
//     }
//     return maxAns;
// }

void reversingArray (int arr[], int size){
   int left = 0;
   int right = size-1;

   while (left<=right) {
    swap(arr[left], arr[right]);
    left++;
    right--;
   }
   for (int i=0; i<size; i++){
    cout<<arr[i]<<" ";
   }
}
   void extremeArray (int arr[], int size){
    int left = 0;
    int right = size - 1;
    while (left<=right){
        if (left == right){
            cout<<arr[left]<<endl;
        }
        else {
            cout<<arr[left]<<endl;
            cout<<arr[right]<<endl;
           
        }
       left++;
       right--;
    }
   }


int main()
{

    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    // reversingArray (arr, size);

    extremeArray (arr, size);



    // int maximum = findMinimumOfArray (arr, size);
    // cout<<maximum<<endl;

    // int arr[8] = {0,1,1,1,0,0,1,1};
    // int size = 8;
    // int countOne = 0;
    // int countZero = 0;

    // for (int i=0; i<size; i++){
    //     if (arr[i]==1){
    //         countOne++;
    //     }  
    //     if (arr[i]==0){
    //         countZero++;
    //     }
    // }

    // cout<<"Number of one is: "<<countOne<<endl;
    // cout<<"Number of zero is: "<<countZero<<endl;
 
    // int arr[5] = {2,3,6,8,10};
    // int size = 5;
    // int target = 11;

    // bool ans = linearSearch(arr, size, target);

    // if (ans == true){
    //     cout<<"Target found"<<endl;
    // }
    // else {
    //     cout<<"Target not found"<<endl;
    // }

    // int arr[5] = {2,4,6,8,10};
    // int n=5;
    // int target = 8;
    // bool flag = 0;
    // flag = 0 means target not found
    // flag = 1 means target found 

    // for (int i=0; i<n; i++){
    //     if (arr[i] == target){
    //         flag = 1;
    //         break;
    //     }
    // }
    // if (flag == 1){
    //     cout<<"Target found"<<endl;
    // }
    // else {
    //     cout<<"Target not found"<<endl;
    // }

    // for (int i=0; i<n; i++){
    //     cout<<"Enter the value for index: "<<i<<" ";
    //     cin>>arr[i];
    // }
    // cout<<"Printing the array"<<endl;
    // for (int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // int sum=0;
    // cout<<"The sum of Array"<<endl;
    // for (int i=0; i<n; i++){
    //      sum = sum + arr[i];
    // }
    // cout<<sum;

    // for (int i=0; i<n; i++){
    //     cout<<"Enter the value for index: "<<i<<" ";
    //     cin>>arr[i];
    // }
    // cout<<"The array is "<<endl;
    // for (int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl<<"Doubling the array"<<endl;
    // for (int i=0; i<n; i++){
    //     cout<<arr[i]*2<<" ";
    // }

    // for (int i=0; i<n; i++){
    //     cout<<"Enter index "<<i<<endl;
    //     cin>>arr[i];
    // }
    // cout<<"The array is "<<endl;
    // for (int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }


    // int arr[10] = {1, 2, 3, 4, 5, 6 , 7 ,8 ,9, 10};

    // for (int i=0; i<10; i++){
    //     cout<<arr[i]<<" ";
    // }

    //     int arr[15] = {2,7};

    //     for (int i=0; i<15; i++){
    //         cout<<arr[i]<<" ";
    //     }
    //

    // int arr[15] = {1};

    // for (int i=0; i<15; i++){
    //     cout<<arr[i]<<" ";
    // }
    // int n;
    // cout<<"Enter the size of array "<<endl;
    // cin>>n;
    // int array[n];
    // fill_n(array, n, 1);

    // for (int i=0; i<n; i++){
    //     cout<<array[i]<<" ";
    // }

    // int third[15] = {2,7};
    // printArray(third, 15);

    // int fifth[5] = {3,2,5,3,7};
    // printArray(fifth, 5);

    // int sixth[10];
    // fill_n (sixth, 10, 2);
    // printArray(sixth, 10);

}