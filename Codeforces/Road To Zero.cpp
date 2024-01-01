#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll a, b;
        cin >> a >> b;
        ll ans;
        if (2 * a <= b)
        {
            ans = (x + y) * a;
        }
        else
        {
            ll diff = abs(x - y);
            ans = diff * a;
            diff = min(x, y);
            ans += diff * b;
        }
        cout << ans << endl;
    }

    return 0;
}