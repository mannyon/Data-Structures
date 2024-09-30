#include <iostream>
#include <vector>

using namespace std;

int findTotal(int ind, vector<int> &arr, int sum)
{   

    if (ind >= arr.size())
    {
        // if sum is equals to zero, then it will return 1
        // or else it will return 0.
        return sum == 0;
    }

    return findTotal(ind + 1, arr, sum - arr[ind]) + findTotal(ind + 1, arr, sum);
}

int repeteadAns(int ind, vector<int>&arr, int sum){

    if(sum == 0){
        return 1;
    }

    if(sum < 0 || ind >= arr.size()){
        return 0;
    }

    return repeteadAns(ind, arr, sum - arr[ind]) + repeteadAns(ind + 1, arr, sum);
}

int main()
{
    vector<int> arr = {1,1};
    int sum = 1;
    // cout << findTotal(0, arr, sum);
    cout<<repeteadAns(0, arr, sum);
}