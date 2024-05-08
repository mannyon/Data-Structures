#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ansVector;
    vector<string> myVector;
    set<string> mySet;
    
    
    int i = 0, j = strs.size() - 1;
    while (i < j)
    {
        string stri = strs[i];
        string strj = strs[j];
        int cnti = stri.size();
        int cntm = 0;
        for (int m = 0; m < stri.size(); m++)
        {
            char currChi = stri[m];
            char currChj = strj[m];

            if (stri.find(currChj) == string::npos)
            {
                break;
            }
            else
            {
                cntm++;
                if (cntm == cnti)
                {
                    mySet.insert(stri);
                    mySet.insert(strj);
                    break;
                }
                
            }
        }
        j--;
    }
    copy(mySet.begin(), mySet.end(), back_inserter(myVector));
    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << " ";
    }
}