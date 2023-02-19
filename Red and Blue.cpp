#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> r(n, 0);
        int a;
        cin >> a;
        r[0] = a;
        for (int i = 1; i < n; i++)
        {
            int a;
            cin >> a;
            r[i] = r[i - 1] + a;
        }
        int m;
        cin >> m;
        vector<int> b(m, 0);
        int e;
        cin >> e;
        b[0] = e;
        for (int i = 1; i < m; i++)
        {
            int a;
            cin >> a;
            b[i] = b[i - 1] + a;
        }
        int rmax = INT_MIN;
        int bmax = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            rmax = max(rmax, r[i]);
        }
        for (int i = 0; i < m; i++)
        {
            bmax = max(bmax, b[i]);
        }
        cout << max(rmax + bmax, 0) << endl;
    }

    return 0;
}