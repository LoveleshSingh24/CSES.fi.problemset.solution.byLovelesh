#include <bits/stdc++.h>
using namespace std;
unsigned n = 0;
class Solution
{
private:
    bool checkSwap(string str, unsigned x, unsigned y)
    {
        for (unsigned i = x; i < y; i++)
        {
            if (str[i] == str[y])
            {
                return 0;
            }
        }
        return 1;
    }
    vector<string> solve(string str, vector<string> &ans, unsigned index)
    {
        // base condition
        if (index >= unsigned(str.size()))
        {
            ans.push_back(str);
            n++;
            return ans;
        }
        for (unsigned i = index; i < unsigned(str.size()); i++)
        {
            bool check = checkSwap(str, index, i);
            if (check)
            {
                swap(str[index], str[i]);
                solve(str, ans, index + 1);
                swap(str[index], str[i]);
            }
        }

        return ans;
    }

public:
    vector<string> permute(string &str)
    {
        vector<string> ans;
        unsigned index = 0;
        vector<string> p = solve(str, ans, index);
        return p;
    }
    void print(vector<string> p)
    {
        for (unsigned i = 0; i < unsigned(p.size()); i++)
        {
            cout << p[i] << endl;
        }
    }
};
int main()
{
    string a;
    cin >> a;

    Solution s;
    vector<string> p = s.permute(a);
    sort(p.begin(), p.end());
    cout << n << endl;
    s.print(p);
}