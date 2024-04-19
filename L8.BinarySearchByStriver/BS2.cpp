#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int firstOcc(vector<int> arr, int n, int k){
    int start = 0;
    int end = n-1;
    int first = -1;
    while (start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==k){
            first = mid;
            end = mid-1;
        }   
        else if(k > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return first;
}

int lastOcc(vector<int> arr, int n, int k){
    int start = 0;
    int end = n-1;
    int last = -1;
    while (start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid] == k){
            last = mid;
            start = mid+1;
        }
        else if(k > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return last;
}

int main (){

    vector<int> arr ({1});
    int n = arr.size();
    int k = 1;
    cout<<"first occerecence is at index: "<<firstOcc(arr, n, k)<<endl;
    cout<<"last occerecence is at index: "<<lastOcc(arr, n, k)<<endl;


    // vector<int> arr ({1,2,3,4,7});
    // int n = arr.size();
    // int m = 6;
    // int start =0;
    // int end = n-1;
    // int ans = n;
    // int flag = 0;
    // while (start<=end){
    //     int mid = start+(end-start)/2;
    //     if (arr[mid]==m){
    //         flag = 1;
    //         cout<<mid<<endl;
    //         break;
    //     }
    //     else if(m > arr[mid]){
    //         start = mid+1;
    //     }
    //     else  {
    //         end = mid-1;
    //     }
    // }
    // if (flag == 0){
    //     int start = 0;
    //     int end = n-1;
    //     while (start<=end){
    //         int mid = start+(end-start)/2;
    //         if (arr[mid]>m){
    //             ans = mid-1;
    //             end = mid-1;
    //         }
    //         else {
    //             start = mid+1;
    //         }
    //     }
    //     cout<<ans;
    // }


    // vector<int> arr ({1,2,3,3,7,8,9,9,9,11});
    // int x = 12;
    // int n = arr.size();
    // int start = 0;
    // int end = n-1;
    // int ans = 10;
    // while (start<=end){
    //     int mid = start+(end-start)/2;
    //     if (arr[mid] >= x){
    //         ans = mid;
    //         end = mid-1;
    //     }
    //     else if (arr[mid] < x){
    //         start = mid+1;
    //     }
    // }
    // cout<<ans;
}