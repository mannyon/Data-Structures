#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossibleSolution(vector<int>& stalls, int dist, int cows){
    int cntCows = 1;
    int last = stalls[0];
    for (int i=0; i<stalls.size(); i++){
        if(stalls[i]-last >= dist){
            cntCows++;
            last = stalls[i];
        }
        if(cntCows==cows) return true;
    }
    return false;
}

int main () {
    vector<int> stalls ({2,3,7,10,9,13,23,16,29});
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int k = 4;
    
    int low = 1;
    int high = stalls[n-1]-stalls[0];
    while (low<=high){
        int mid = low + (high-low)/2;
        if(isPossibleSolution(stalls, mid, k)==true){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    // return high;
    cout<<high;
}