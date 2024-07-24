#include <iostream>
#include <algorithm>

using namespace std;

void checkLastOcc(string s, char ch, int ind, int &ans, int size){
    //base case
    if(ind < 0){
        return;
    }

    //proccessing
    if(s[ind]==ch){
        ans = ind;
        return;
    }

    //recursive call
    checkLastOcc(s, ch, ind-1, ans, size);
}


void reverseString(string& s, int len, int start, int end){
    if(start >= end){
        return;
    }

    swap(s[start], s[end]);

    reverseString(s, len, start+1, end-1);
}

void addRE(string&num1, int p1, string&num2, int p2, int carry, string&ans){
    //base case
    if(p1 < 0 && p2 < 0){
        if(carry != 0){
            ans.push_back(carry + '0');
        }
        return;
    }

    //one case
    int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
    int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
    int csum = n1 + n2 + carry;
    int digit = csum % 10;
    carry = csum / 10;
    ans.push_back(digit + '0');

    //recursive call
    addRE(num1, p1-1, num2, p2-1, carry, ans);
}


int main() {
    string num1 = "11";
    string num2 = "123";
    string ans = "";
    addRE(num1, num1.size()-1, num2, num2.size()-1, 0, ans);
    reverse(ans.begin(), ans.end());
    cout<<ans<<endl;
}