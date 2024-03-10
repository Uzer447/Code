// MAKE IT ONE

#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll left;
        ll right;
        cin >> left >> right;

        if (gcd(left, right) == 1)
        {
            for (ll i = left + 1; i <= right; i++)
            cout << i << " ";
            cout << left;
        }
        else if (((right - left + 1) % 2) == 0)
        {
            for (ll i = left; i <= right; i = i + 2)
            cout << i + 1 << " " << i << " ";
        }
        else if (left % 2 != 0 && right % 2 != 0)
        {
            cout << left + 1 << " " << left + 2 << " " << left << " ";
            for (ll i = left + 3; i <= right; i = i + 2)
            cout << i + 1 << " " << i << " ";
        }
        else
        {
            cout << "-1";
        }

        cout << endl;
    }
}