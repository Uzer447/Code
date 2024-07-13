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
        int xx = x;
        int yy = y;
        x += -a + b, y += -c + d;
        if (x >= x1 && x <= x2 && y >= y1 && y <= y2 && (x2 > x1 || a + b == 0) && (y2 > y1 || c + d == 0))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
