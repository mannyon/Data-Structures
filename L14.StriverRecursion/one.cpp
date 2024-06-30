#include <iostream>
#include <vector>

using namespace std;

void printPalindrome(int arr[], int size, int ind, vector<int>&ans){
    if(ind >= size){
        for(auto num:ans){
            cout<<num<<" ";
        }
        if(ans.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }

    ans.push_back(arr[ind]);
    printPalindrome(arr, size, ind+1, ans);
    ans.pop_back();
    printPalindrome(arr, size, ind+1, ans);
}

int main() {
    int arr[] = {3, 1, 2};
    vector<int>ans;
    int size = 3;
    printPalindrome(arr, size, 0, ans);
}