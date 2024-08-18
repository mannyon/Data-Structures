#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
    vector<int> a = {1,2,8,9,10,13};
    vector<int> b = {3,4,7,10,6,12};

    int n = a.size();
    int m = b.size();

    int total_len = n+m;

    int gap = (total_len / 2) + (total_len % 2);

    while(gap > 0){
        int i = 0, j = gap;
    }
}