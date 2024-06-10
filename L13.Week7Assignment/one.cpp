#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s = "aac";
    string p = "*a";

    int i=0;
    int flag=0;
    while(i<min(s.size(), p.size())){
        if(s[i] == p[i]){
            i++;
        }
        else{
            if(p[i]=='*'){
                i++;
            }
            else if(p[i]=='?'){
                i++;
            }
            else{
                cout<<"false"<<endl;
                flag = 1;
                break;
            }
        }
    }
    if(!flag){
        cout<<"true"<<endl;
    }
    
}