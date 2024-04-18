#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// *************print Name**********
int countName = 0;
void printName(){
    string name = "Manish";
   if (countName == 5){
    return;
   }
   cout<<name<<endl;
    countName++;
    printName();
}

// ******print from 1 to N*************
int countNum = 1;
void printNumber(){
    int null = 10;
    if(countNum == null+1){
        return;
    }
    cout<<countNum<<endl;
    countNum++;
    printNumber();
}

// **************print from N to 1*************


void printReverseNum(int n){
    // cout<<"Enter N"<<endl;
    
    int count = 0;
    if (n == count){
        return;
    }
    cout<<n<<endl;
    n--;
    printReverseNum(n);
    
}

void striverMethod(int n, int i){
    if (n < i){
        return;
    }
    cout<<n<<endl;
    striverMethod(n-1, i);
}

void backTracking(int i, int n){
    if (i < 1){
        return;
    }
    backTracking(i-1, n);
    cout<<i<<endl;
}

void reverseBackTracking(int i, int n){
    if (i > n){
        return;
    }
    reverseBackTracking(i+1, n);
    cout<<i<<endl;
}

int main () {
    int n;
    cin>>n;
    // printName();
    // printNumber();
    // printReverseNum(n);
    // striverMethod(n, 1);
    // backTracking(n, n);
    reverseBackTracking(1, n);
}