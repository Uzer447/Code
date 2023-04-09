#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        vector<int> pf(n + 1);
        pf[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            pf[i] = pf[i - 1] + v[i];
        }
        int r = n;
        int l = 1;
        int sum;
        while (l < r)
        {
            int m = (l + r) / 2;
            cout << "? " << (m - l + 1) << " ";
            for (int i = l; i <= m; i++)
            {
                cout << i << " ";
            }
            cout << endl;
            cin >> sum;
            if (sum == (pf[m] - pf[l - 1]))
            {
                l = m + 1;
            }
            else
            {
                r = m;
            }
        }
        cout << "! " << l << endl;
    }

    return 0;
}