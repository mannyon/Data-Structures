#include <iostream>
#include <string.h>
#include <vector>
#include <string>

using namespace std;

int main () {

     vector<string> garbage = {"G", "P", "GP", "GG"};
    //  vector<string> garbage = {"G","P","GP","GG"};
     vector<int> travel ({2,4,3});
     int pickP=0;
     int pickG=0;
     int pickM=0;

     int travelP=0;
     int travelG=0;
     int travelM=0;

     int lastP=0;
     int lastG=0;
     int lastM=0;

    for (int i = 0; i < garbage.size(); ++i) {
        string str = garbage[i];
        for(int j=0; j<str.length(); j++){
            char curr = str[j];
            if(curr == 'P'){
                pickP++;
                lastP = i;
            }
            else if(curr == 'G'){
                pickG++;
                lastG = i;
            }
            else if(curr=='M') {
                pickM++;
                lastM = i;
            }
        }
    }

    for(int i=0; i<lastP; i++){
        travelP += travel[i];
    }
    for(int i=0; i<lastG; i++){
        travelG += travel[i];
    }
    for(int i=0; i<lastM; i++){
        travelM += travel[i];
    }

    int ans = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);

    cout<<ans<<endl;

    
    









    // string key = "the quicky brown fox";
    //  cout<<vectorString;
    // char start = 'a';
    // char mapping [280] = {0};
    // char ch = 't';
    // mapping[ch]='a';
    // cout<<mapping;

}