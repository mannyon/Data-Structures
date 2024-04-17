#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// *********************dividing*******************

int findDivide (int dividend, int divisor){
   int s=0;
   int e = dividend;
   int m = s+(e-s)/2;   
   int ans = -1;
    
   while (s<=e){
        int q = m;
    if (q * divisor == dividend){
        return q;
    }
    else if (q * divisor < dividend){
        ans = q;
        s = m+1;
    }
    else {
        e = m-1;
    }
    m=s+(e-s)/2;
   } 
   return ans;
}

// **********nearlySortedArray**************

int nearlySortedArray (int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int m = s+(e-s)/2;

    while (s<=e){
        if (m-1>=0 && arr[m-1]==target){
            return m-1;
        }
        else if (arr[m] == target){
            return m;
        }
        else if (m+1<n && arr[m+1]==target){
            return m+1;
        }
        else if (arr[m] < target){
            s = m+2;
        }
        else {
            e = m-2;
        }
        m = s+(e-s)/2;
    }
    return -1;
}

// *****************finding odd occuring element**********************

int findOddOccuringElement (int arr[], int n){
    int s = 0;
    int e = n-1;
    int m = s+(e-s)/2;

    while (s<=e){
        if (s==e){
            return arr[s];
        }
        else if (m & 1){
            if (m-1 >= 0 && arr[m] == arr[m-1]){
                s = m+1;
            }
            else {
                e = m-1;
            }
        }
        else {
            if (m+1 < n && arr[m] == arr[m+1]){
                s = m+2;
            }
            else {
                e = m;
            }
        }
        m = s+(e-s)/2;
    }
    return -1;
}

int main () {

    int arr [] = {12,12,3,3,6,6,2,2,4,4,5,5,2,2,4,4,7,7,8};
    int n = sizeof(arr)/sizeof(int);


    int ans = findOddOccuringElement (arr, n);

    cout<<ans;

    // int ans = nearlySortedArray (arr, n, target);

    // cout<<ans;
   
    // int dividend = 29;
    // int divisor = 7;
    

    // int ans = findDivide (abs(dividend), abs(divisor));

    // if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)){
    //     ans = 0 - ans;
    // }
    // else if (dividend > 0 && divisor == 0){
    //     cout<<"Not defined";
    // }
    // else {
    // cout<<ans;
    // }
    
}