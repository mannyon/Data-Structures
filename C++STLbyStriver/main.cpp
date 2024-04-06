#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    vector<int> v ({1,2,3,4});
    vector<int>::iterator it = v.begin();
    for (auto it : v){
        cout<<it<<" ";
    }


    // v.push_back(1);
    // v.emplace_back(2); 

    // for (int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
}


