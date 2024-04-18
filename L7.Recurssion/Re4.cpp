#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void reverseArray(int arr[], int i, int l){
    if (i > l){
        return;
    }
    // swap(arr[i], arr[l]);
    cout<<arr[l]<<" ";
    reverseArray(arr, i, l-1);
}

void f(int i, int arr[], int n){
    if (i>=n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    f(i+1, arr, n);
}

void palindromCheck(string name, int n, int i){

    if (i > n){
        cout<<"It's a Palindrome"<<endl;
        return;
    }
    else if (name[i] != name[n]){
        cout<<"Not a palindrome"<<endl;
        return;
    }
    palindromCheck(name, n-1, i+1);
   
}

int main () {
    // int n; cin>>n;
    // int arr[n];
    // for (int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // f(0, arr, n);
    // for (int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // int n = sizeof(arr)/sizeof(int);
    // reverseArray(arr, 0, n-1);

    string name = "121";
    int n = name.length();
    palindromCheck(name, n-1, 0);
}