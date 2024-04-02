#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int hashingOnOwn (int *hash, int *arr, int n){
    vector<int> nums(n);
    for (int i=0; i<n; i++){
        hash[arr[i]] ++;
    }

    for (int i=0; i<n; i++){
        cout<<hash[i]<<" ";
    }

    cout<<endl;
    int index = 0;
    for (int i=0; i<n; i++){
        // if (hash[i]>1){
        //     brr[index] = i;
        //     index++;
        // }
        if (hash[i] > 1){
           nums.push_back(i);
        }
        
    }

     for (int i=0; i<n; i++){
         cout<<nums[i]<<" ";
     }

    cout<<endl;

    
}

int repeatingElement(int *arr, int n){
    int brr;
    for (int i=0; i<n; i++){

    }
}

int main () {

       int A[] = {1, 5, 10, 20, 40, 80};
       int B[] = {6, 7, 20, 80, 100};
       int C[] = {3, 4, 15, 20, 30, 70, 80, 120};

    // int arr[] = {1,5,3,4,3,5,6};
    // int n = 7;
    // int hash[n] = {0};

    // hashingOnOwn(hash, arr, n);
    // int ans = repeatingElement(arr, n);
    // cout<<ans;
}