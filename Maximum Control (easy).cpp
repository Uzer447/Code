#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    unordered_map<int, int> mp;
    t--;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b]++;
    }
    int ans = 0;
    for (auto it : mp)
    {
        if (it.second == 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
