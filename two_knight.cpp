#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;

    for (long long k = 1; k <= n; k++)
    {
        long long k1, k2;
        k1 = k * k * (k * k - 1) / 2;
        k2 = 4 * (k - 2) * (k - 1);
        long long m = k1 - k2;
        cout << m << " ";
    }

    return 0;
}