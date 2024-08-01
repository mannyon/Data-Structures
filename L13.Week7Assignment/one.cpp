#include <iostream>
#include <vector>

using namespace std;

void func(int n, int& sum, int i){
    //base case


    //recursive calls
    while (i*i<=n){
        sum += 1;
        if(n >= i*i){
           return func(n-(i*i), sum, i+1);
        }
    }
    
}

int main() {
    int n = 12;
    int sum = 0;
    int i = 0;
    func(n, sum, i);

    //perfectsquares done
}