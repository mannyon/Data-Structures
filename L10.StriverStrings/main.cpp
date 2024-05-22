#include <iostream>
#include <vector>
#include <cstring>
#include <limits.h>

using namespace std;

int checkBeauty(string& s, int cnt[26], int max, int min){

    for(int i=0; i<26; i++){
        if(cnt[i]>max){
            max = cnt[i];
        }
        if(cnt[i] > 0 && cnt[i]<min){
            min = cnt[i];
        }
    }
    return max - min;
}

int main() {
    int cnt [26];
    string s = "aabcb";
    int n = s.size();
    
    int ans = 0;
    for(int i=0; i<n; i++){
        int max = INT_MIN;
        int min = INT_MAX;
        memset(cnt, 0, sizeof(cnt));

        for(int j=i; j<n; j++){
            cnt[s[j] - 'a']++;
            
            int beauty = checkBeauty(s, cnt, max, min);
            ans += beauty;
        }


    }
    cout<<ans;
}