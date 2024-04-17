#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int divideAns(int n, int divisor){
    int start = 0;
    int end = n;
    int ans = 0;
    
    while (start<=end){
        int mid = start+(end-start)/2;
        if(divisor * mid <= n){
            ans = mid;
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return ans;
}

double decimalPricission(int n, int divisor){
    // ans = 4.14285
    double decimal = divideAns(n, divisor);
    double step = 0.1;
    int precission = 10;
    for (int i=0; i<precission; i++)
    {
        double j = decimal;
        while (divisor * j <= n){
            decimal = j;
            j += step;
        }
        step /= 10;
    }
    return decimal;
}

int main () {
    int dividend = 29;
    int divisor = 7;
    double ans = decimalPricission(dividend, divisor);
    // cout<<ans;
    printf("%0.10f", ans);
    cout<<endl;
}