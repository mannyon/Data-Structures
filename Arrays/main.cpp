#include <iostream>
using namespace std;

// int add (int a, int b) {
//     int c;
//     c = a+b;
//     return c;
// }

int main()
{
    // cout<<"Hello world Manish"<<endl;
    // cout<<"Next line";

    // int marksInMaths=85;

    // cout<<"The marks of stundent Manish in maths is "<<marksInMaths<<".";

    //    int a, b;

    //     cout<<"Enter first number: "<<endl;
    //     cin>>a;

    //     cout<<"Enter second number: "<<endl;
    //     cin>>b;

    //     cout<<"a + b = "<<a+b<<endl;
    //     cout<<"a - b = "<<a-b<<endl;
    //     cout<<"a * b = "<<a*b<<endl;
    //     cout<<"a / b = "<<(float)a/b<<endl;

    // int age;
    // cout << "Enter your age: " << endl;
    // cin >> age;

    // if (age > 150 || age < 1)
    // {
    //     cout << "Invalid age.";
    // }

    // else if (age >= 18)
    // {
    //     cout << "You can vote.";
    // }

    // else
    // {
    //     cout << "You are not eligible to vote.";
    // }

    // int index=0;

    // while (index<34) {
    //     cout<<"We are at index "<<index<<endl;
    //     index = index+1;
    // }
    // int a;
    // cout<<"Enter the number you want table of: "<<endl;
    // cin>>a;
    // for (int i=1; i<=10; i++) {
    //     cout<<a<<" x "<<i<<" = "<<a*i<<endl;
    // }

    // int a, b;

    // cout<<"Enter first number "<<endl;
    // cin>>a;

    // cout<<"Enter second number "<<endl;
    // cin>>b;

    // cout<<"The sum of a and b is "<<add(a,b);

    //    int marks[6];

    //     for (int i=1; i<7; i++) {
    //         cout<<"Enter the marks of "<<i<<" student"<<endl;
    //         cin>>marks[i];
    //     }

    //     for (int i=1; i<7; i++) {
    //         cout<<"The marks of "<<i<<" student is "<<marks[i]<<endl;
    //     }

    int arr2d[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
        };

        for (int i=0; i<2; i++) {
            for (int j=0; j<3; j++){
                cout<<"The value at "<<i<<", "<<j<<" is "<<arr2d[i][j]<<endl;
            }
        }

    return 0;
}