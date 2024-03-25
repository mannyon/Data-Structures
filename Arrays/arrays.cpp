#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    // int arr[10] = {1, 2, 3, 4, 5, 6 , 7 ,8 ,9, 10};

    // for (int i=0; i<10; i++){
    //     cout<<arr[i]<<" ";
    // }

    //     int arr[15] = {2,7};

    //     for (int i=0; i<15; i++){
    //         cout<<arr[i]<<" ";
    //     }
    //

    // int arr[15] = {1};

    // for (int i=0; i<15; i++){
    //     cout<<arr[i]<<" ";
    // }
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int array[n];
    fill_n(array, n, 1);

    for (int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }

}