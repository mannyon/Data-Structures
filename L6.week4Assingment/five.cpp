#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;  

int mySqrt(int n){
    int start = 0;
    int end = n;
    int ans = 0;
    while (start<=end){
        int mid = start+(end-start)/2;
        if(mid*mid <= n){
            ans = mid; 
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return ans;
}

double myPreccisionSqrt(int n){
    double sqrt = mySqrt(n);
    double step = 0.1;
    int precision = 15;
    for (int i=0; i<precision; i++)
    {
        double j = sqrt;
        while (j*j<=n){
            sqrt = j;
            j += step;
        }
        step /= 10;
    }

    return sqrt;
}

int main () {
    int n = 51;
    double sqrt = myPreccisionSqrt(n);
    // cout<<"Sqrt: "<<sqrt<<endl;
    printf("%0.20f", sqrt);
    cout<<endl;
    return 0;
}