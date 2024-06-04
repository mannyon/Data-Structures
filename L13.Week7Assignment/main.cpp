#include <iostream>

using namespace std;

int lastOccurence(string str, int size, int index, char target, int &ans){
    if(index >= size){
        return ans;
    }
    if(str[index] == target){
        ans = index;
        lastOccurence(str, size, index+1, target, ans);
    }
    lastOccurence(str, size, index+1, target, ans);
    return ans;
}

int main() {
    string str = "abcddefg";
    int size = str.length();
    int index = 0;
    char target = 'd';
    int ans;
    cout<<lastOccurence(str, size, index, target, ans);
}