#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int duplicates (vector<int> &arr, int n){
    int i=1;
    int j=0;
    while (i<n){
        if (arr[i]==arr[j]){
            i++;
        }
        else {
            j++;
            arr[j] = arr[i];
            i++;
        }
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main () {
    vector<int> arr ({0,0,1,1,1,2,2,3,3,4});
    int n = arr.size();

    duplicates(arr, n);
}