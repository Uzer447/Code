#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = (k == 0) ? v[0] - 1 : v[k - 1];
    int cnt = 0;
    forn(n)
    {
        if (v[i] <= ans)
            cnt++;
    }
    if (cnt != k || ans < 1 || ans > 1000000000)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}
