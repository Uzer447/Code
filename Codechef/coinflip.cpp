#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g;
        cin >> g;
        while (g--)
        {
            int i, n, q;
            cin >> i >> n >> q;
            char v[n];
            if (i == 1)
            {
                for (int j = 0; j < n; j++)
                    v[j] = 'H';
            }
            else
            {
                for (int j = 0; j < n; j++)
                    v[j] = 'T';
            }
            int x = 1;
            int k=n;
            while (k--)
            {
                for (int j = 0; j < x; j++)
                {
                    if (v[j] == 'H')
                        v[j] = 'T';
                    else
                        v[j] = 'H';
                }
                x++;
            }
            int ans = 0;

            if (q == 1)
            {
                for (int p = 0; p < n; p++)
                {
                    if (v[p] == 'H')
                        ans++;
                }
            }
            else
            {
                for (int p = 0; p < n; p++)
                {
                    if (v[p] == 'T')
                        ans++;
                }
            }

            cout << ans << endl;
        }
    }
    return 0;
}