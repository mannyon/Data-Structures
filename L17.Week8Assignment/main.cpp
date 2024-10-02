#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findPermut(vector<int> &arr, int sum)
{
    if(sum == 0) return 1;
    if(sum < 0) return 0;
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans += findPermut(arr, sum-arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {1,5,6};
    cout<<findPermut(arr, 7)<<endl;
}