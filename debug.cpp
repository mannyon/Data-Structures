#include<iostream>
using namespace std;

int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;
    int val = 4;

    int ans = linearSearch(arr, n, val);

    cout<<ans;

    // int n;
    // int sum = 0;
    // cin >> n;
    // int input[n];
    // for(int i=0;i<n;i++){
    //     cin >> input[i];
    // }
    //  for(int i=0; i<n; i++){
    //       sum = sum + input[i];
       
    //  }
    //  cout << sum << endl;
    return 0;
}