#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    int size = v.size();
    cout << "Printing the vecor" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    cout<<"New method"<<endl;
    for (auto p:v){
        cout<<p<<" ";
    }
}

int main()
{

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    print(v);
    // vector<int> v;
    // cout<<"Enter the size of array: ";
    // int n;
    // cin>>n;

    // for (int i=0; i<n; i++){
    //     int d;
    //     cout<<"Enter the "<<i<<" element: ";
    //     cin>>d;
    //     v.push_back(d);
    // }
    // print(v);
    // v.clear();
    // // for (int i=0; i<n; i++){
    // //     v.push_back(80);
    // // }
    // print (v);

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
}