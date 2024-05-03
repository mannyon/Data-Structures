#include <iostream>
#include <string.h>

using namespace std;

int main () {
    string key = "the quicky brown fox";
    char start = 'a';
    char mapping [280] = {0};
    char ch = 't';
    mapping[ch]='a';
    cout<<mapping;

}