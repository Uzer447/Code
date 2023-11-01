#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n + 1, 0);
    vector<int> ad(n + 2, 0);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<vector<int>> q;
    vector<int> qd(m + 2, 0);
    q.push_back({});
    int x, y, z;

    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y >> z;
        q.push_back({x, y, z});
    }

    for (int i = 1; i <= k; i++)
    {
        cin >> x >> y;
        qd[x] += 1;
        qd[y + 1] -= 1;
    }

    for (int j = 1; j <= m; j++)
    {
        qd[j] = qd[j - 1] + qd[j];
        ad[q[j][0]] += q[j][2] * qd[j];
        ad[q[j][1] + 1] -= q[j][2] * qd[j];
    }

    for (int i = 1; i <= n; i++)
    {
        ad[i] = ad[i] + ad[i - 1];
        cout << a[i] + ad[i] << " ";
    }

    cout << endl;
}

signed main()
{
    solve();
    return 0;
}