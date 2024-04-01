#include <iostream>
#include <vector>

using namespace std;

void beforeMoving (vector<int>&arr){
     for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

void movingAllNegativeToOneSide (vector<int>&arr){
    int index = 0;
    int l = 0;
    int n = arr.size();
    while (index<n){
        if (arr[index]<0){
            swap(arr[index], arr[l]);
            l++;
            index++;
        }
        else if (arr[index]>0){
            index++;
        }
    }
}

void afterMoving (vector<int>&arr){
     for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main () {

    vector<int> arr ({1,3,4,2,2});

    // vector<int> arr({1,2,-3,4,-5, 6});


    // beforeMoving(arr);
    // cout<<endl;
    // movingAllNegativeToOneSide (arr);
    // afterMoving(arr);
}