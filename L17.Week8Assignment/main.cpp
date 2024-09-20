#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using namespace std;

void reverseStr(int i, int j, string &str){
    if(i >= j) return;

    swap(str[i], str[j]);
    reverseStr(i+1, j-1, str);
}

void myrock(int start, int end, string &str){
    if(start >= end) return;

    char c = str[start];
    str[start] = str[end];
    str[end] = c;
    reverseStr(start+1, end-1, str);
}

void makeUpper(int ind, string &str){

    if(ind >= str.size()) return;

    if(str[ind] >= 'a' && str[ind] <= 'z'){
        str[ind] = str[ind] - 32;
    }

    makeUpper(ind+1, str);
}

int main() {
    string str = "manish";

    makeUpper(0, str);

    cout<<str<<endl;
}