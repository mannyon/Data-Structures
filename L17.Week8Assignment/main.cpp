#include <iostream>
#include <vector>

using namespace std;

void toh(int n, int source, int help, int dest)
{
    if (n == 1)
    {
        cout << "MD1F " << source << " to " << dest << endl;
        return;
    }
    toh(n - 1, source, dest, help);
    cout << "MD" << n << "F " << source << " to " << dest << endl;
    toh(n - 1, help, source, dest);
}

int main()
{
    int n = 4;
    toh(n,1,2,3);
}