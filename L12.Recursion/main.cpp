#include <iostream>
#include <vector>

using namespace std;

bool checkSort(int arr[], int size, int index){
    if(index >= size){
        return true;
    }
    if(arr[index-1] > arr[index]){
        return false;
    }
    int ans = checkSort(arr, size, index+1);
    return ans;
}

int binarySearch(int arr[], int start, int end, int target){
    int mid = start+(end-start)/2;
    int ans;
    if(start > end){
        return -1;
    }
    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] < target){
        return binarySearch(arr, mid+1, end, target);
    }
    else{
        return binarySearch(arr, start, mid-1, target);
    }
}

void substrFun(string str, string output, int index){
    if(index >= str.length()){
        cout<<"->"<<output<<endl;
        return;
    }

    char ch = str[index];

    substrFun(str, output, index+1);

    output.push_back(ch);
    substrFun(str, output, index+1);
} 

int main() {

    string str = "xy";
    string output = "";
    int index = 0;
    substrFun(str, output, index);

    // int arr[] = {10,20,30,40,50};
    // int size = sizeof(arr)/sizeof(int);
    // int target = 30;
    // int start = 0;
    // int end = size-1;
    // int ans = binarySearch(arr, start, end, target);
    // ans==-1?cout<<"target not found":cout<<ans<<endl;
    // checkSort(arr, size, index)==1?cout<<"sorted":cout<<"unsorted";
}