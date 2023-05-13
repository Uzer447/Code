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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        ll ans = 0;
        forn(n)
        {
            if (i % 2 == 0)
            {
                if (v[i] % 2 == 0)
                    ans += v[i];
            }
            else
            {
                if (v[i] % 2 == 1)
                    ans -= v[i];
            }
        }
        if (ans == 0)
        {
            cout << "Tie\n";
        }
        else if (ans > 0)
        {
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
    }

    return 0;
}
