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
    unordered_map<int, pair<int, int>> mp;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]].first = i + 1;
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        mp[b[i]].second = i + 1;
    }
    int ans = INT_MAX;
    for (auto it : mp)
    {
        int sum = it.second.first + it.second.second;
        ans = min(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
