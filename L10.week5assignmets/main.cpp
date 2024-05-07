#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int isPossible(char m, char k)
{
    char i = tolower(m);
    char j = tolower(k);
    string str1 = "aeiou";
    if (str1.find(i) != string::npos && str1.find(j) != string::npos)
    {
        return 1;
    }
    else if (str1.find(i) == string::npos)
    {
        return 2;
    }
    else if (str1.find(j) == string::npos)
    {
        return 3;
    }
}

int main()
{
    string s = "leetcode";
    int i = 0;
    int j = s.length() - 1;
    cout << "before swapping " << s << endl;

    while (i < j)
    {
        if (isPossible(s[i], s[j]) == 1)
        {
            swap(s[i], s[j]);
            i++, j--;
        }
        else if (isPossible(s[i], s[j]) == 2)
        {
            i++;
        }
        else if (isPossible(s[i], s[j]) == 3)
        {
            j--;
        }
    }

    cout << "after swapping " << s << endl;
}