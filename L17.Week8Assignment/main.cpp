#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void findAns(int n, int left, int right, string &ans, vector<string>&totalAns){

    if(left == n && right == n){
        totalAns.push_back(ans);
        return;
    }

    if(left < n){
        ans.push_back('(');
        findAns(n, left+1, right, ans, totalAns);
        ans.pop_back();
    }
    if(right < left){
        ans.push_back(')');
        findAns(n, left, right+1, ans, totalAns);
        ans.pop_back();
    }
}

int main() {
    int n = 1;
    string ans;
    vector<string> totalAns;
    findAns(n, 0, 0, ans, totalAns);
}