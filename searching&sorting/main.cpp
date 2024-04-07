#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch (int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = (start + end) / 2;
    

    while (start<=end){
        
        if (arr[mid]==target){
            return mid;
        }
        else if (arr[mid] < target){
            start = mid + 1;
        }
        else if (target < arr[mid]){
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int findLastOccurence (int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start<=end){
        if (arr[mid] == target /*&& arr[mid]==arr[mid-1]*/){
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            start = mid + 1;
        }
        else if (arr[mid] > target){
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}

int findFirstOccurence (int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start<=end){
        if (arr[mid] == target /*&& arr[mid]==arr[mid-1]*/){
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            start = mid + 1;
        }
        else if (arr[mid] > target){
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}


int totalOccurence (int arr[], int n, int target){
    int first = findFirstOccurence(arr, n, target);
    int last = findLastOccurence(arr, n, target);
    int total = last - first + 1;
    return total;
}

int missingElement (int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start<=end){
         
         if (start == n-1){
            return n+1;
         }
        else if (arr[mid] == mid + 1){
            start = mid + 1;
        }
        else if (arr[mid] != mid + 1){
            ans = mid;
            end = mid - 1;
        }
       
        mid = start + (end-start) / 2;
    }

   
    return ans+1;
  
}

int main () {

    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    
    int ans = missingElement (arr, n);

    cout<<ans;

    // int ans = totalOccurence (arr, n, target);
    // cout<<ans;

    // int ans = firstFirstOccurence (arr, n , target);
    // cout<<ans;

    // int arr[] = {10,20,30,40,50,60,70,80,90};
    // int n = 9;
    // int target = 120;

    // int ans = binarySearch(arr, n, target);
    // if (ans == -1){
    //     cout<<"Target not found"<<endl;
    // }
    // else {
    //     cout<<"The index on which the target was found is: "<<ans<<endl;
    // }

    
}