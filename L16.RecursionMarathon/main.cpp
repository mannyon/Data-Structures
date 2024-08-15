#include <iostream>
#include <vector>

using namespace std;

int solve(vector<vector<int>>&arr, int i, int j, int row, int col){
    //base case
    if(j >= col){
        return 0;
    }

    if(i >= row){
        return 0;
    }

    


    //recursive calls
    int opt1 = solve(arr, i, j+1, row, col);
    int opt2 = solve(arr, i+1, j+1, row, col);
    int opt3 = solve(arr, i+1, j, row, col);
}

int main(){
    vector<vector<int>>matrix = {
        {1,0,1,0},
        {1,0,1,1},
        {1,1,1,1},
        {1,0,0,1}
    };

    int i=0;
    int j=0;
    int row = matrix.size();
    int col = matrix[0].size();
    int ans = solve(matrix, i, j, row, col);
}