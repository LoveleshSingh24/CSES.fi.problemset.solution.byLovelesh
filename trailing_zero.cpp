#include <iostream>
using namespace std;
int trailingZeros(long long n)
{
    int cnt = 0;
    if (n < 0)
    {
        return -1;
    }

    else
    {
        for (int i = 5; n / i >= 1; i *= 5)
        {
            cnt += n / i;
        }
    }
    return cnt;
}

int main()
{

    long long n;
    cin >> n;
    cout << trailingZeros(n);
    return 0;
}
