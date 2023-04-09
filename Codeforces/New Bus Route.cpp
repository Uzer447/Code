#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = INT_MAX;
    forn(n - 1)
    {
        ans = min(ans, v[i + 1] - v[i]);
    }
    int cnt = 0;
    forn(n - 1)
    {
        if (v[i + 1] - v[i] == ans)
            cnt++;
    }
    cout << ans << " " << cnt << endl;

    return 0;
}
