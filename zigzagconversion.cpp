#include <iostream>
#include <string>
#include <vector>

using namespace std;

int func(string& s, vector<vector<char>>& letters, int numRows, int numCol){
    int strInd = numRows;
    int rowInd = numRows;
    for(int i=rowInd-1; i<numRows; i++){
        for(int j=numCol-1; j<numCol; j++){
            letters.push_back({s[strInd]});
        }
    }
}
    
int main() {
    vector<vector<char>> letters;
    string s = "PAYPALISHIRING"; // do not paste in LC (NP)
    int numRows = 3; //NP
    int numCol = 1; 


    for(int i=0; i<numRows; i++){
        for(int j=0; j<numCol; j++){
            letters.push_back({s[i]});
        }
    }

    // for(int i=0; i<numRows; i++){
    //     for(int j=0; j<numCol; j++){
    //         cout<<letters[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    func(s, letters, numRows, numCol+1);

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<<letters[i][j]<<" ";
        }
        cout<<endl;
    }

    

}