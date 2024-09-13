#include <iostream>
#include <vector>

using namespace std;

void findAns(int i, vector<string>&arr, string&temp, vector<string>&ans, int &maxLength){


    string str = arr[i];

    for(int j=0; j<str.size(); j++){
        
        temp += str;

        findAns(i+1, arr, temp, ans, maxLength);

        int pos = temp.find(str);
        if(pos != string::npos){
            temp.erase(pos, str.length());
        }
    }
}

int main() {
    vector<string> arr = {"cha","r","act","ers"};
    string temp;
    vector<string>ans;
    int maxLength = 0;
    findAns(0, arr, temp, ans, maxLength);

}