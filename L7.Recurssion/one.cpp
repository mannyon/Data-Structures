#include <iostream>

using namespace std;


int cnt = 1;

void f(){
    if (cnt == 10){
        return; 
    }
    cout<<cnt<<endl;
    cnt++;
    f();
}

int main () {
    f();
}