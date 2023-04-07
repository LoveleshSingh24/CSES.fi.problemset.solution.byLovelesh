// Example:
// a = 145785635595363569532135132
// b = 3151635135413512165131321321
// c = 999874455222222200651351351
// m = 1000000007
// Print (a*b*c)%m.

// Method 1:
// First, multiply all the number and then take modulo:
// (a*b*c)%m = (459405448184212290893339835148809
// 515332440033400818566717735644307024625348601572) %
// 1000000007
// a*b*c does not fit even in the unsigned long long
// int due to which system drop some of its most
// significant digits. Therefore, it gives the wrong answer.
// (a*b*c)%m = 798848767

#include <iostream>
using namespace std;
int main()
{
    int mod = 1000000007;
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans = (ans * 2) % mod;
    }
    cout << ans;
    cout << endl;
    // for exmaple
    int a = 5;
    cout << a % mod; // it will give  value 5
}
