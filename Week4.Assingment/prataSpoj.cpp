#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossibleSol (vector<int>&arr, int p, int cook, int totalTime){
    int asCook = 1;
    int cookAs = 0;
    int time = 0;
    int k = 0;
    for(int i=1; i<=p; i++){
        time = time + asCook * i;
        cookAs = i;
        if (time < totalTime){
            k = time;
        }
        else if (time > totalTime){
            asCook++;
            time = 0;
            i = 0;
        }
    } 

    if (k <= totalTime){
        return true;
    }

    if (cookAs < cook){
        return false;
    }

   return true;
}
       

int main () {
    vector<int> arr ({1, 2, 3, 4});
    int p = 10;
    int cook = arr.size();
    int lastCook = arr[cook-1];  
    int end=0;
    int ans = -1;
    for(int i=1; i<=p; i++){
        end = end + lastCook * i;
    }   
    int start = 0;
    // isPossibleSol(arr, p, cook);
    while (start<=end){
        int mid = start+(end-start)/2;
        if(isPossibleSol(arr, p, cook, mid)==true){
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    cout<<ans;
}