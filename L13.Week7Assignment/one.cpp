#include <iostream>

using namespace std;

void checkLastOcc(string s, char ch, int ind, int &ans, int size){
    //base case
    if(ind < 0){
        return;
    }

    //proccessing
    if(s[ind]==ch){
        ans = ind;
        return;
    }

    //recursive call
    checkLastOcc(s, ch, ind-1, ans, size);
}


void reverseString(string& s, int len, int start, int end){
    if(start >= end){
        return;
    }

    swap(s[start], s[end]);

    reverseString(s, len, start+1, end-1);
}


int main() {
    string s = "abcddefg";
    int len = s.size();
    int start = 0;
    int end = len-1;
    reverseString(s, len, start, end);
    cout<<s<<endl;



    // int len = s.length();
    // char ch = 'd';
    // int ind = len-1;
    // int ans = -1;
    // checkLastOcc(s, ch, ind, ans, len);
    // ans==-1?cout<<"not found":cout<<"found at ind "<<ans<<endl;
}