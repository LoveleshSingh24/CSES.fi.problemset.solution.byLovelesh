#include <bits/stdc++.h>
using namespace std;
void printTheArray(long long arr[], long long n)
{
    int i = 0;
    int arr2[n];
    arr2[i] = arr[0];

    for (long long i = 1; i < n; i++)
    {
        arr2[i] = arr[i] ^ arr[i - 1];
    }
    for (long long i = 0; i < n; i++)
    {
        cout << arr2[i];
    }
    cout << endl;
}

void binaryTogray(long long n, long long arr[], long long i)
{
    if (i == n)
    {
        printTheArray(arr, n);
        return;
    }
    arr[i] = 0;
    binaryTogray(n, arr, i + 1);
    arr[i] = 1;
    binaryTogray(n, arr, i + 1);
}

int main()
{
    long long n;
    cin >> n;

    long long arr[n];
    binaryTogray(n, arr, 0);
}