#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;


int main () {
   vector<vector<int>> nums {
    {0,0,0}, 
    {0,1,1}
    };

    int row = 2;
    int col = 3;

    int rowIndex = INT_MIN;
    int sure = INT_MIN;

    for (int i=0; i<row; i++){
        int oneCount = 0;
        for (int j=0; j<col; j++){
            if (nums[i][j]==1){
                oneCount++; 
                
                if (rowIndex<oneCount){
                    rowIndex = oneCount;
                    if (sure<oneCount){
                    sure = rowIndex;
                }
                }
            }
        }
      
    }
    //  cout<<oneCount<<endl;
        
       vector<int> arr;

       arr.push_back(rowIndex);
       arr.push_back(sure);

       for (int i=0; i<2; i++){
        cout<<arr[i]<<" ";  
       }

            
}