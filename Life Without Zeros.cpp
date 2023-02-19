#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll reverse(ll x)
{
    ll r = 0;
    while (x > 0)
    {
        ll d = x % 10;
        x /= 10;
        r = r * 10 + d;
    }
    return r;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    ll c = a + b;
    ll z = 0;
    ll x = 0, y = 0;
    while (a > 0)
    {
        ll d = a % 10;
        a /= 10;
        if (d != 0)
        {
            x = x * 10 + d;
        }
    }
    while (b > 0)
    {
        ll d = b % 10;
        b /= 10;
        if (d != 0)
        {
            y = y * 10 + d;
        }
    }
    while (c > 0)
    {
        ll d = c % 10;
        c /= 10;
        if (d != 0)
        {
            z = z * 10 + d;
        }
    }
    
    z = reverse(z);
    x = reverse(x);
    y = reverse(y);
    if (x + y == z)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}