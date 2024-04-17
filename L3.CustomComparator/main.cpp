#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printvv (vector<vector<int>> &v){
    for (int i=0; i<v.size(); i++){
        vector<int>&temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout<<a<<" "<<b<<endl;
    }
    cout<<endl;

}

bool customMaking (vector<int> &a, vector<int> &b){
    return a[1] < b[1];
}

int main () {
    vector<vector<int>> v;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    for (int i=0; i<n; i++){
        
        int a, b;
        cout<<"Values of a and b"<<endl;
        
        cin>>a>>b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout<<"Printing values:"<<endl;
    printvv (v);
    cout<<"After sorting"<<endl;
    sort(v.begin(), v.end(), customMaking);
    printvv (v);
}