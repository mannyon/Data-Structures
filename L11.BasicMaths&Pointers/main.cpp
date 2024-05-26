#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    
    int a = 5;
    int* ptr = &a;
    cout<<"size of ptr "<<sizeof(ptr)<<endl;

    char c = 'k';
    char* cptr = &c;
    cout<<"size of cptr "<<sizeof(cptr)<<endl;

    long lachi = 10;
    long* lptr = &lachi;
    cout<<"size of lptr "<<sizeof(lptr)<<endl;

    // int a = 10;
    // int* ptr = &a;
    // cout<<ptr<<endl;

}