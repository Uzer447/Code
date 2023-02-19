#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    unordered_map<int, int> mp;
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        mp[a]++;
    }
    int ans = 0;
    for (auto it : mp)
    {
        int x = it.second;
        x = x - x % 2;
        ans += x;
    }
    cout << ans / 4 << endl;
    return 0;
}
