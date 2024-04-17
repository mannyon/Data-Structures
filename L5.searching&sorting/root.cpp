#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int newMethod(int num)
{
    int s = 0;
    int e = num;
    long long int m = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {

        if (m * m == num)
        {
            return m;
        }
        else if (m * m < num)
        {
            ans = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int num = 68;

    cout << newMethod(num);

    // for (int i = 0; i < num; i++)
    // {
    //     if (i * i == num)
    //     {
    //         cout << i;
    //     }
    //     else if (i * i < num && num < (i + 1) * (i + 1))
    //     {
    //         cout << i;
    //     }
    // }
}