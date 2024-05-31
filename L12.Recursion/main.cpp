#include <iostream>

using namespace std;

void printArray(int arr[], int n){
    if(n==0) return;
    cout<<*arr<<" "<<endl;
    printArray(arr+1, n-1);
}

int main() {
    int arr[] = {1,2,3,4};
    printArray(arr, 4);
}