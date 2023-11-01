#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a[55], b[55], c, k, n, m;
        cin >> n >> m >> k;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(a, a + n), sort(b, b + m);
        if (b[m - 1] > a[0])
        {
            swap(a[0], b[m - 1]);
            sort(a, a + n), sort(b, b + m);
        }
        if (k % 2 == 0)
        {
            if (a[n - 1] > b[0])
            {
                swap(a[n - 1], b[0]);
                sort(a, a + n), sort(b, b + m);
            }
        }
        c = 0;
        for (int i = 0; i < n; i++)
            c = c + a[i];
        cout << c << endl;
    }
    return 0;
}