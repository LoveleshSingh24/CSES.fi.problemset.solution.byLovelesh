#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if (b > a)
        {
            swap(a, b);
        }

        if (a > 2 * b || (a + b) % 3 != 0)
        {
            cout << "NO";
            cout << endl;
        }
        else
        {
            cout << "YES";
            cout << endl;
        }
    }
    return 0;
}