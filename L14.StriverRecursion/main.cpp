#include <iostream>
#include <vector>

using namespace std;

void printName(string&name, int i){
    if(i >= 5){
        return;
    }
    cout<<name<<endl;
    printName(name, i+1);
}

void printOneToN(int n, int i){
    if(i > n){
        return;
    }
    printOneToN(n, i+1);
    cout<<i<<endl;
}

int sumOfN(int n){
    if(n == 0){
        return 0;
    }
    return n + sumOfN(n-1);
}

void printSubsequences(int arr[], int n, int ind, vector<int>& ans){
    if(ind >= n){
        for(auto num:ans){
            cout<<num<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[ind]);
    printSubsequences(arr, n, ind+1, ans);
    ans.pop_back();
    printSubsequences(arr, n, ind+1, ans);
}

int main() {

    int arr[] = {3, 1, 2};
    int n = 3;
    int ind = 0;
    vector<int> ans;
    printSubsequences(arr, n, ind, ans);

    // string name = "Manish";
    // int n = 10;
    // int i=1;
    // printOneToN(n, i);
    // printName(name, i);
}