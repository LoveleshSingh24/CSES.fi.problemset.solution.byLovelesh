#include <iostream>
#include <string.h>
#include <unordered_map>
using namespace std;
int main()
{
    string str;
    cout << "entre the string " << endl;
    cin >> str;
    int dev[str.length()];
    for (int i = 0; i < str.length(); i++)
    {
        int count = 0;
        for (int j = 0; j < str.length(); j++)
        {
            if (j < i && str[i] == str[j])
            {
                break;
            }
            if (str[i] == str[j])
            {
                count++;
            }
        }
        dev[i] = count;
        if (count % 2 != 0)
        {
            cout << str[i] << count << endl;
        }
    }
    int odd = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (dev[i] % 2 == 1)
        {
            odd++;
        }
    }
    cout << odd << endl;
    if (odd > 1)
    {
        cout << "its not become a palidrome " << endl;
    }
    else
    {
        cout << "you can make this string a palidrome" << endl;
        unordered_map<char, int> m;
        for (int i = 0; i < str.length(); i++)
        {
            m[str[i]]++;
        }
        int odd = 1;
        char odd_char;
        for (auto j = m.begin(); j != m.end(); j++)
        {
            if ((j->second) % 2 != 0)
            {
                odd_char = j->first;
            }
        }
        string firsthalf = "", secondhalf = "";
        for (auto j : m)
        {
            string s(j.second / 2, j.first);
            firsthalf = firsthalf + s;
            secondhalf = s + secondhalf;
        }
        if (odd == 1)
        {
            cout << firsthalf + odd_char + secondhalf << endl;
        }
        else
        {
            cout << firsthalf + secondhalf << endl;
        }
    }
    return 0;
}
