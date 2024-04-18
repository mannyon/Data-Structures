#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void sumOfFirst(int i, int sum){
    
    if (i < 1){
        cout<<sum;
        return;
    }
    sumOfFirst(i-1, sum+i);
}

int functionRecurrsion(int n){
    if (n==0){
        return 0;
    }
    return n + functionRecurrsion(n-1);
}

int funcFactRec(int n){
    if (n == 1){
        return 1;
    }
    return n * funcFactRec(n-1);
}

int main () {
    int n;
    cin >> n;
    // sumOfFirst(n, 0);
    // cout<<functionRecurrsion(n)<<endl;
    cout<<funcFactRec(n);
}