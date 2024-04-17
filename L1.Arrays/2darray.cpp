#include <iostream>
#include <limits.h>
#include <vector>
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
        cout << ans << endl;
    }
}

void colWiseSum(int arr[][4], int row, int col)
{

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = arr[j][i] + sum;
        }
        cout << "Sum of col " << i << " is: " << sum << endl;
    }
}

int diagonalSum(int arr[][3], int row, int col)
{
    int sum = 0;
    // for (int i=0; i<row; i++){
    //     for (int j=0; j<col; j++){
    //         if (i==j){
    //             sum = sum + arr[i][j];
    //         }
    //     }
    // }
    // return sum;

    for (int i = 0; i < row; i++)
    {

        sum = sum + arr[i][i];
    }
    return sum;
}

void diagonalPrint(int arr[][3], int row, int col)
{
    for (int i = row - 1; i >= 0; i--)
    {
        // for (int j=0; j<col; j++){

        cout << arr[i][i] << " ";

        // }
        // cout<<endl;
    }
}

void oppDiagonal(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i + j == row - 1)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}

void norPrint(int arr[][3], int row, int col)
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

void transposePrint(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
        cout << endl;
    }
}

int main()
{

    // vector<vector<int>> arr (5, vector<int>(10,19));

    vector<vector<int>> brr;

    vector<int> vect1;
    vect1.push_back (2);
    vect1.push_back (13);
    vect1.push_back (4);
    vect1.push_back (3);
    vect1.push_back (1);
    
    vector<int> vect2 (20, 2);
    vector<int> vect3 (7, 9);
    vector<int> vect4 (8, 4);
    vector<int> vect5 (3, 7);

    brr.push_back(vect1);
    brr.push_back(vect2);
    brr.push_back(vect3);
    brr.push_back(vect4);
    brr.push_back(vect5);

    for (int i=0; i<brr.size(); i++){
        for (int j=0; j<brr[i].size(); j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    // v.push_back(4);
    // v.push_back(7);
    // v.push_back(6);
    // v.push_back(1);
    // v.push_back(2);

    // for (int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    //  cout<<v.size()<<endl;

    // int arr[3][3] = {
    //     {2,4,6},
    //     {8,3,5},
    //     {7,9,1}
    // };
    // int row = 3;
    // int col = 3;

    // // norPrint (arr, row, col);
    // // cout<<endl;

    // cout<<"before"<<endl;
    // printArray (arr, row, col);
    // transposePrint (arr, row, col);
    // cout<<"after"<<endl;
    // printArray (arr, row, col);

    // oppDiagonal (arr, row, col);
    // diagonalPrint (arr, row, col);
    // int ans = diagonalSum (arr, row, col);

    // cout<<ans<<endl;

    // int arr[3][4] = {
    //     {10, 20, 5, 7},
    //     {2, 4, 6, 8},
    //     {10, 15, 15, 10}};
    // int row = 3;
    // int col = 4;
    // colWiseSum (arr, row, col);
    // rowWiseSum(arr, row, col);

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