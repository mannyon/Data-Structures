#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void removeAllOcc(string&s, string&part){
    //base case
    if(s.find(part) == string::npos){
        return;
    }

    //one case
    int pos = s.find(part);
    s.erase(pos, part.size());

    //recursive call
    removeAllOcc(s, part);
}

int main() {
    string s = "axxxxyyyyb";
    string part = "xy";
    
    removeAllOcc(s, part);

    cout<<s<<endl;
}