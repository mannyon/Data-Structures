#include <iostream>
#include <string.h>
#include <vector>
#include <string>
#include<limits.h>

using namespace std;

 int mystoi(string s) {
        int len = s.size();
        double num = 0;
        int i=0;
        while(s[i] == ' '){
            i++;
        }
        bool negative = s[i] < '-';
        negative == true ? i++ : i;
        while(i < len && s[i] >= '0' && s[i] <= '9'){
            num = num*10 + s[i];
            i++;
        }
        num = negative ? -num : num;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        return num;
    }

int main()
{
    string s = "123";
   int ans = mystoi(s);
   cout<<ans;














    // vector<string> words = {"abc","deq","mee","aqq","dkd","ccc"};
    // string pattern = "pqq";
    // vector<string> ans;
    // vector<string> myans;
    // char mapping[300] = {0};
    
    

    // char start = 'a';
    // for (int i = 0; i < pattern.length(); i++)
    // {
    //     char ch = pattern[i];
    //     if (mapping[ch] == 0)
    //     {
    //         mapping[ch] = start;
    //         pattern[i] = start;
    //         start++;
    //     }
    //     else {
    //         pattern[i] = mapping[ch];
    //     }
    // }

    // cout << pattern<<endl;

    // for(int i=0; i<words.size(); i++){
    //     string s = words[i];
    //     char start = 'a';
    //     char wordMap[300] = {0};
    //     for(int j=0; j<s.length(); j++){
    //         char ch = s[j];
    //         if(wordMap[ch]==0){
    //             wordMap[ch] = start;
    //             s[j] = start;
    //             start++;
    //         }
    //         else {
    //             s[j] = wordMap[ch];
    //         }
            
    //     }
    //     ans.push_back(s);
    // }

    // cout<<endl;

    // for(int i=0; i<ans.size(); i++){
    //     if(ans[i]==pattern){
    //         myans.push_back(words[i]);
    //     }
    // }

    // for(int i=0; i<myans.size(); i++){
    //     cout<<myans[i]<<" ";
    // }




































    // for (int i = 0; i < words.size(); i++)
    // {
    //     string s = words[i];
    //     char start = 'a';
    //     for (int j = 0; j < s.length(); j++)
    //     {
    //         char ch = s[i];
    //         if (wordMap[ch] == 0)
    //         {
    //             wordMap[ch] = start;
    //             s[j] = start;
    //             start++;
    //         }

    //         // cout<<s[j];
    //     }

    //     // cout<<endl;
    //     // words[i] = s;
    //     // cout<<words[i]<<" ";
    // }

    // for(int i=0; i<words.size(); i++){
    //     // cout<<words[i]<<" ";
    // }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     if (pattern == ans[i])
    //     {
    //         myans.push_back(words[i]);
    //     }
    // }

    // cout << endl;

    // for (int i = 0; i < myans.size(); i++)
    // {
    //     // cout << myans[i] << " ";
    // }

    // for(int i=0; i<words.size(); i++){
    //     cout<<words[i]<<" ";
    // }

    //  vector<string> garbage = {"G", "P", "GP", "GG"};
    // //  vector<string> garbage = {"G","P","GP","GG"};
    //  vector<int> travel ({2,4,3});
    //  int pickP=0;
    //  int pickG=0;
    //  int pickM=0;

    //  int travelP=0;
    //  int travelG=0;
    //  int travelM=0;

    //  int lastP=0;
    //  int lastG=0;
    //  int lastM=0;

    // for (int i = 0; i < garbage.size(); ++i) {
    //     string str = garbage[i];
    //     for(int j=0; j<str.length(); j++){
    //         char curr = str[j];
    //         if(curr == 'P'){
    //             pickP++;
    //             lastP = i;
    //         }
    //         else if(curr == 'G'){
    //             pickG++;
    //             lastG = i;
    //         }
    //         else if(curr=='M') {
    //             pickM++;
    //             lastM = i;
    //         }
    //     }
    // }

    // for(int i=0; i<lastP; i++){
    //     travelP += travel[i];
    // }
    // for(int i=0; i<lastG; i++){
    //     travelG += travel[i];
    // }
    // for(int i=0; i<lastM; i++){
    //     travelM += travel[i];
    // }

    // int ans = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);

    // cout<<ans<<endl;

    // string key = "the quicky brown fox";
    //  cout<<vectorString;
    // char start = 'a';
    // char mapping [280] = {0};
    // char ch = 't';
    // mapping[ch]='a';
    // cout<<mapping;
}