#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<pair<int, int>> c;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        c.push_back({a[i], b[i]});
        mp[a[i]] = b[i];
    }
    sort(c.begin(), c.end());
    vector<int> v[101];
    forn(n)
    {
        v[c[i].second].push_back(c[i].first);
    }
    int ans = 0;
    while (k--)
    {
        int q;
        cin >> q;
        int sch = mp[q];
        int maxele = v[sch][v[sch].size() - 1];
        if (maxele != q)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
