#include <iostream>
#include <vector>

using namespace std;

void rotateImage (vector<vector<int>> & matrix, int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i=0; i<n; i++){
        for (int j=n-1; j>=0; j--){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
}


int main () {

    vector<vector<int>> matrix {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };

    int n = matrix.size();

    rotateImage (matrix, n);
}