#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3 >> a4;
        if (a1 > 0 && a2 == 0 && a3 == 0 && a4 == 0)
            cout << a1 << endl;
        else if (a1 > 0)
        {
            ll ans = a1 + 2 * min(a2, a3);
            a2 -= min(a2, a3);
            a3 -= min(a3, a2);
            if (max(a2, a3) >= a1)
            {
                ans += a1 + 1;
            }
            else
            {
                ans += max(a2, a3);
                ll diff = a1 - max(a2, a3);
                ans += min(diff, a4);
                ans++;
            }
            cout << ans << endl;
        }
        else if (a1 == 0)
        {
            cout << 1 << endl;
        }
    }
    return 0;
}