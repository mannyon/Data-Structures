#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
    sort(chars.begin(), chars.end());
    int mapp[256] = {0};
    vector<char> clone;
    set<char> st;

    for (int i = 0; i < chars.size(); i++)
    {
        mapp[chars[i]]++;
    }

    for (int i = 0; i < chars.size(); i++)
    {
        st.insert(chars[i]);
    }

    chars.clear();

    copy(st.begin(), st.end(), back_inserter(chars));

    for (int i = 0; i < chars.size(); i++)
    {
        clone.push_back(chars[i]);
        if (mapp[chars[i]] > 1)
        {
            string numStr = to_string(mapp[chars[i]]);
            clone.insert(clone.end(), numStr.begin(), numStr.end());
        }
    }

    chars.clear();
    copy(clone.begin(), clone.end(), back_inserter(chars));

    

    for (int i = 0; i < chars.size(); i++)
    {
        cout << chars[i] << " ";
    }

    cout << endl;
    cout << chars.size();
}