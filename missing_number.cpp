#include <iostream>
using namespace std;
int main()
{
    long long n;
    long long sum;
    cin >> n;
    sum = n * (n + 1) / 2;
    long long sum1 = 0;

    long long arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        sum1 = sum1 + arr[i];
    }

    cout << sum - sum1;
    return 0;
}