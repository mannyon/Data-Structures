#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void waveMatrix (vector<vector<int>> arr){
    
    for (int i=0; i<arr.size(); i++){
        if ((i & 1)== 0){
             for (int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        }
        else {
            for (int j=arr[i].size()-1; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }
       
        cout<<endl;
    }
    cout<<endl;

    // for (int i=0; i<arr[i].size(); i++){
    //    if ((i & 1)==0){
    //     for (int j=0; j<arr.size(); j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //    }
    //    else {
    //     for (int j=arr.size()-1; j>=0; j--){
    //         cout<<arr[j][i]<<" ";
    //     }
    //    }
      
    // }
    
}

int main () {
    vector<vector<int>> arr = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    waveMatrix (arr);
}