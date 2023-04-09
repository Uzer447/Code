#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 0)
    {
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
    {
        if ((b - a) % c == 0 && ((b - a) / c) >= 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
