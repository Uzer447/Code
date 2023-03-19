#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        ll maxrangelr = abs(x2 - x1);
        ll maxrangeud = abs(y2 - y1);
        if (x2 * x1 < 0)
        {
            maxrangelr++;
        }
        if (y2 * y1 < 0)
        {
            maxrangeud++;
        }
        if (a <= maxrangelr && b <= maxrangelr && c <= maxrangeud && d <= maxrangeud)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
