// make two set of n integer such that there sum is equal
#include <iostream>
using namespace std;
int main()
{
    long long n;

    cin >> n;
    long long arr[n];
    long long temp[n];
    long long temp1[n];
    for (long long i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    long long sum = 0;

    for (long long i = 1; i <= n; i++)
    {
        sum = sum + arr[i];
    }
    cout << endl;
    if (sum % 2 == 0)
    {
        cout << "YES ";
        cout << endl;

        long long k = 0;

        long long sum1 = 0;
        long long b = 0;

        for (long long i = n; i > 0; i--)
        {

            sum1 = sum1 + arr[i];
            if (sum1 <= sum / 2)
            {
                temp1[b] = arr[i];
                b++;
            }
            else
            {

                sum1 = sum1 - arr[i];
                temp[k] = arr[i];
                k++;
            }
        }
        cout << endl;
        cout << b;
        cout << endl;
        for (long long i = 0; i < b; i++)
        {
            cout << temp1[i] << " ";
        }
        cout << endl;
        cout << k;
        cout << endl;
        for (long long i = 0; i < k; i++)
        {
            cout << temp[i] << " ";
        }
    }
    else
    {
        cout << endl;
        cout << "NO ";
    }
}
