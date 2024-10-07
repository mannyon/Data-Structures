#include <iostream>
#include <vector>

using namespace std;

void findNBitBinary(string &str, int zero, int one, int n){
    if(str.size() == n){
        cout<<str<<endl;
        return;
    }

    if(str.size() != 0){
        str.push_back('0');
        findNBitBinary(str, zero+1, one, n);
        str.pop_back();
    } 

    str.push_back('1');
    findNBitBinary(str, zero, one+1, n);
    str.pop_back();

   
}

int main() {
    int n = 5;
    string str = "";
    findNBitBinary(str, 0, 0, n);
}