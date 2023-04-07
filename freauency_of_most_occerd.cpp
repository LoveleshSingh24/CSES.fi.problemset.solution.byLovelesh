#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{

    string arr;
    cin >> arr;

    int max = 0;

    cout << endl;
    for (int i = 0; i < arr.length(); i++)
    {
        int count = 0;
        for (int j = 0; j < arr.length(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > max)

        {
            max = count;
        }
    }
    cout << max;
    return 0;
}