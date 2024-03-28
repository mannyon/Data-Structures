#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void print2dArray(int arr[][4], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int findTarget(int arr[][3], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int maximumValue(int arr[][3], int row, int col)
{
    int maxAns = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (maxAns < arr[i][j])
            {
                maxAns = arr[i][j];
            }
        }
    }
    return maxAns;
}

int findMin(int arr[][3], int row, int col)
{
    int minAns = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < minAns)
            {
                minAns = arr[i][j];
            }
        }
    }
    return minAns;
}

void rowWiseSum(int arr[][4], int row, int col)
{
   
    for (int i = 0; i < row; i++)
    {
        int ans = 0;
        for (int j = 0; j < col; j++)
        {

            ans = ans + arr[i][j];
        }
        cout<<ans<<endl;
    }
}

int main()
{

    int arr[3][4] = {
        {10, 20, 5, 7},
        {2, 4, 6, 8},
        {10, 15, 15, 10}};
    int row = 3;
    int col = 4;
    rowWiseSum(arr, row, col);

    // int arr[4][3] = {
    //     {1,2,3},
    //     {7,4086,6},
    //     {9,8,5},
    //     {124,45,12}
    // };
    // int row = 4;
    // int col = 3;
    // int ans = maximumValue (arr, row, col);
    // cout<<"The maximum value is: "<<ans<<endl;
    // int min = findMin (arr, row, col);
    // cout<<"The minimum value is: "<<min<<endl;
    // int arr[3][3] = {
    //     {10,20,30},
    //     {40,50,60},
    //     {70,80,90}
    // };
    // int row = 3;
    // int col = 3;
    // int target = 100;
    // printArray (arr, row, col);
    // cout<<"Target is "<<target<<endl;
    // int ans = findTarget (arr, row, col, target);
    // if (ans == 1){
    //     cout<<"Target found";
    // }
    // else {
    //     cout<<"Target not found";
    // }

    // int arr[3][3];
    // int row = 3;
    // int col = 3;

    // for (int i=0; i<row; i++){
    //     for (int j=0; j<col; j++){
    //         cout<<"Enter the number for row: "<<i<<" and col: "<<j<<endl;
    //         cin>>arr[i][j];
    //     }
    // }

    // printArray (arr, row, col);

    // int arr[4][4] = {
    //     {1,2,3,4},
    //     {10,20,30,50},
    //     {11,21,13,14},
    //     {20,22,53,47}
    // };

    // int row = 4;
    // int col = 4;

    // print2dArray (arr, row, col);

    // int arr[4][3] = {
    //     {1, 2, 3},
    //     {1, 20, 3},
    //     {10, 2, 3},
    //     {2, 3, 4}
    // };

    // int row = 4;
    // int col = 3;
    // printArray (arr, row, col);
}