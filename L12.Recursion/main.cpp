#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

void printArray(int arr[], int n)
{
    if (n == 0)
    {
        return;
    }
    cout << *arr << " ";
    printArray(arr + 1, n - 1);
}

void printArrayUsingIndex(int arr[], int n, int i)
{
    if (i >= n)
    {
        return;
    }
    cout << arr[i] << " ";
    printArrayUsingIndex(arr, n, i + 1);
}

bool searchArray(int arr[], int size, int index, int target)
{
    if (index >= size)
    {
        return false;
    }
    if (arr[index] == target)
    {
        return true;
    }
    bool ans = searchArray(arr, size, index + 1, target);
    return ans;
}

int findMin(int arr[], int size, int minNo, int index)
{
    if (index >= size)
    {
        return minNo;
    }
    minNo = min(arr[index], minNo);
    int ans = findMin(arr, size, minNo, index + 1);
    return ans;
}

void findEven(int arr[], vector<int> &ans, int size, int index)
{
    if (index >= size)
    {
        return;
    }
    if (arr[index] % 2 == 0)
    {
        ans.push_back(arr[index]);
    }
    findEven(arr, ans, size, index + 1);
}

void findMax(int arr[], int size, int index, int &maxNo){
    if(index >= size){
        return;
    }
    maxNo = max(arr[index], maxNo);
    findMax(arr, size, index+1, maxNo);
}

void doubleArray(int arr[], int size, int index){
    if(index >= size){
        return;
    }
    arr[index] = 2 * arr[index];
    doubleArray(arr, size, index+1);
}

int findArrayIndex(int arr[], int size, int index, int target){
    if(index >= size){
        return -1;
    }
    if(arr[index] == target){
        return index;
    }
    int ans = findArrayIndex(arr, size, index+1, target);
    return ans;
}

void allOccurence(int arr[], int size, int index, int target){
    if(index >= size){
        return;
    }
    if(arr[index] == target){
        cout<<index<<" ";
    }
    allOccurence(arr, size, index+1, target);

}

void printDigits(int n, vector<int> &ans){
    int num;
    if(n == 0){
        return;
    }

    num = n % 10;

    printDigits(n/10, ans);

    ans.push_back(num);
}

int extractNum(vector<int> &ans, int size, int &digitVal, int index, int ansSize){
    if(index >= ansSize){
        return digitVal;
    }
    int digitPlace = 1;
    for(int i=0; i<size-1; i++){
        digitPlace *= 10;
    }
    digitVal += ans[index] * digitPlace;  
    extractNum(ans, size-1, digitVal, index+1, ansSize);
    return digitVal;
}

void findStringChar(string &s, int target, int index, int size, vector<int> &ans){
    if(index >= size){
        return;
    }
    if(s[index]==target){
        ans.push_back(index);
    }
    findStringChar(s, target, index+1, size, ans);
}

int main()
{
    string s = "Babbar";
    int size = s.size();
    char target = 'a';
    vector<int> ans;
    int index = 0;
    findStringChar(s, target, index, size, ans);
    for(auto num:ans){
        cout<<num<<endl;
    }

    // vector<int>ans = {2, 1, 6, 3, 6};
    // int digitVal = 0;
    // int size = ans.size();
    // int ansSize = ans.size();
    // int keyName = extractNum(ans, size, digitVal, 0, ansSize);

    // cout<<keyName<<endl;

    // printDigits(n, ans);
    // for(auto num:ans){
    //     cout<<num<<endl;
    // }
    // int arr[] = {10, 20, 10, 10, 30, 40};
    // int size = sizeof(arr) / sizeof(int);
    // int index = 0;
    // int target = 10;

    // allOccurence(arr, size, index, target);

    // int ans = findArrayIndex(arr, size, index, target);
    // cout<<ans<<endl;

    // doubleArray(arr, size, index);

    // for(auto num:arr){
    //     cout<<num<<" ";
    // }


    // int maxNo = INT_MIN;
    // findMax(arr, size, index, maxNo);

    // cout<<maxNo<<endl;

    // vector<int> ans;

    // findEven(arr, ans, size, 0);
    // if (ans.size() != 0)
    // {
    //    for(auto i:ans){
    //     cout<<i<<" ";
    //    }
    // }
    // else{
    //     cout<<"no even numbers in arr"<<endl;
    // }

    // int minNo = INT_MAX;

    // int ans = findMin(arr, size, minNo, 0);
    // cout<<ans<<endl;

    // bool ans = searchArray(arr, 5, 0, 21);
    // if(ans){
    //     cout<<"Target found";
    // }
    // else {
    //     cout<<"Target not found";
    // }
    // printArrayUsingIndex(arr, 5, 0);
    // printArray(arr, 5);

    // int prev1 = 0;
    // int prev2 = 1;
    // int prev3;
    // cout<<prev1<<" "<<prev2<<" ";
    // while(prev3<13){
    //     prev3 = prev1 + prev2;
    //     cout<<prev3<<" ";
    //     prev1 = prev2;
    //     prev2 = prev3;
    // }

    // for(int i=1; i<7; i++){
    //     int ans = prev1 + prev2;
    //     cout<<ans<<" ";
    //     prev1 = prev2;
    //     prev2 = ans;
    // }
}