#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long double findMedian(vector<int> arr, int n)
{
    int low = 0;
    int high = arr.size() - 1;
    if (n % 2 == 1)
    {
        return (0 + n) / 2.0;
    }
    else
    {
        int mid = (low + high) / 2;
        long double ans = ((double)(arr[mid]) + (double)(arr[mid + 1])) / 2.0;
        return ans;
    }
}
// complete median of two sorted arra

int main()
{
    vector<int> a({1, 4, 8, 10, 10, 13, 13 });
    vector<int> b({3, 4, 9, 9, 11, 13, 15, 16});
    int n = a.size();
    int m = b.size();

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        ans.push_back(b[i]);
    }
    sort(ans.begin(), ans.end());
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }

    long double medean = findMedian(ans, ans.size());
    if (ans.size() % 2 == 1)
    {
        cout << ans[medean] << endl;
    }
    else
    {
        cout << medean << endl;
    }
}