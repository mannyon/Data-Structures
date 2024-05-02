#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string str = "abc";
    int n = str.length();
    int i, j;
    int cnt = 0;

    if (n % 2 == 1)
    {
        i = 0, j = 0;
        while (i < n && j < n)
        {
            if(str[i]==str[j]){
                cnt++;
                i--, j++;
                if(i-1<0){
                    i=j;
                }
            }
        }
    }
    else
    {
        i = 0, j = 1;
    }
}