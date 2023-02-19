#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll x = 0;
        ll temp = a - 1;
        if (temp % 4 == 0)
            x = temp;
        else if (temp % 4 == 1)
            x = 1;
        else if (temp % 4 == 2)
            x = temp + 1;
        else if (temp % 4 == 3)
            x = 0;
        if (x == b)
            cout << a << endl;
        else if ((x ^ b) != a)
            cout << a + 1 << endl;
        else
            cout << a + 2 << endl;
    }
    return 0;
}