#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        sum += a;
        v.push_back({a-b, b});
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>());
    int ans = 0;
    forn(n)
    {
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        if (sum > m)
        {
            ans++;
            sum -= v[i].first;
        }
        else
        {
            break;
        }
    }
    if (sum <= m)
        cout << ans << endl;
    else
        cout << -1 << endl;

    return 0;
}
