#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s = "vvvlo";
    string ans = "";

    int i=0, k=0;

    while(i<s.size()){
        if(ans.empty()){
            ans.push_back(s[i]);
            s.erase(i, 1);
            i++;
        }
        else if(s[i]!=ans[k]){
            ans.push_back(s[i]);
            s.erase(i, 1);
            i=0;
            k++;
        }
        else {
            i++;
        }
    }
    cout<<ans;


    
}
