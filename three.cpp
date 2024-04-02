#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int repeatingElement (int arr, int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main () {

    int arr [] = {1,5,3,4,3,5,6};
    int n = 7;

    repeatingElement (arr, n);

  
}