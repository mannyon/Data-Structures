#include <iostream>
#include <vector>
using namespace std;

void asendingArray (int arr[], int n){
    // int left = 0;
    // int right = n-1;

    for (int i=0; i<n; i++){
       
        for (int j=i+1; j<n; j++){
            if (arr[i] > arr[j]){
                swap (arr[i], arr[j]);
                
            }
        }
        
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for (int index=0; index<n; index++){
        int j=0;
        if (arr[index] < 0){
            swap(arr[index], arr[j]);
            j++;
        }
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int index = 0;
    int j = 0;

    while (index<n){
        if (arr[index]<0){
            swap(arr[index], arr[j]);
            j++;
        }
        index++;
    }
    int i=0;
    while (i<n){
        cout<<arr[i]<<" ";
        i++;
    }
}

void sortColors(vector<int> & nums, int n){
    int left = 0;
    int right = n-1;
    for (int i=0; i<=right; i++){
        if (nums[i]==0){
            swap (nums[i], nums[left]);
            left++;
        }
        else if (nums[i]==2){
            swap(nums[i], nums[right]);
            right--;
        }
    }
    for (int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
}

int main () {

    vector <int> nums = {0, 1, 2, 2, 1, 0, 1, 0};
    int n = nums.size();

    sortColors(nums, n);

    // int arr[] = {23, -7, 12, -10, -11, 40, 60};
    // int n = 7;
    // vector<int> v{1,2,3,4,5};  
    // int k=v.size();  
    // cout<<"Size of the vector is: "<<k<<endl;
    // asendingArray (arr, n);
}