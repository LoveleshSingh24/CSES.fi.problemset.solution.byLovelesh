#include <bits/stdc++.h>
using namespace std;
void towerOfHonoi(long long start, long long end, string source, string helping, string destination)
{
    if (start > end)
    {
        return;
    }

    towerOfHonoi(start, end - 1, source, destination, helping);
    cout << source << " " << destination << endl;

    towerOfHonoi(start, end - 1, helping, source, destination);
}
int main()
{
    long long end = 3;

    cout << (pow(2, end) - 1);
    cout << endl;

    towerOfHonoi(1, end, "a", "b", "c");
}