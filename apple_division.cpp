#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 7};
    int sum = 15;
    int z = sum / 2;

    cout << endl;
    int sum1 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum1 = sum1 + arr[i];
        if (sum1 > z)
        {
            sum1 = sum1 - arr[i];
        }
        else
        {
            continue;
        }
    }
    cout << sum1;
    cout << endl;
    int a = sum - sum1;
    int ans = a - sum1;
    cout << ans;

    return 0;
}