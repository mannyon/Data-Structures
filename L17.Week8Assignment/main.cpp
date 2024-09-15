#include <iostream>
#include <vector>

using namespace std;

int findSteps(int n){
    if(n <= 3) return n;

    return findSteps(n-1) + findSteps(n-2);
}

int main() {
    int n = 5;

    int l = 0, m = 1, s = 0;
     
    for(int i=1; i<=n; i++){
        s = l+m;
        
        l = m;
        m = s;
    }

    cout<<s<<" ";
}