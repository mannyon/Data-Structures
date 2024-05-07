#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

void mapping(string &str)
{
    char mapp[300] = {0};
    char start = 'a';
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (mapp[ch] == 0)
        {
            mapp[ch] = start;
            start++;
        }
    }

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        str[i] = mapp[ch];
    }
}
int main()
{

    string str = "egg";
    mapping(str);
   cout<<str<<endl;

    // string s = "leetcode";
    // int l = 0, h = s.size() - 1;
    // while (l < h)
    // {
    //     if (isVowel(s[l]) && isVowel(s[h]))
    //     {
    //         swap(s[l], s[h]);
    //         l++, h--;
    //     }
    //     else if (isVowel(s[l]) == 0)
    //     {
    //         l++;
    //     }
    //     else
    //     {
    //         h--;
    //     }
    // }
    // cout << s;
}
