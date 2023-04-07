#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int ans = 1, c = 1;
    for (int i = 1; i < n.length(); i++)
    {
        if (n[i] == n[i - 1])
        {
            c++;
            ans = max(ans, c);
        }
        else
        {
            ans = max(ans, c);
            c = 1;
        }
    }
    cout << ans;

    return 0;
}