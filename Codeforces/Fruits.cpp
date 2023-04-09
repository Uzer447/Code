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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    unordered_map<string, int> mp;
    forn(m)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    vector<int> ans;
    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
    sort(ans.begin(), ans.end());
    int minans = 0;
    int maxans = 0;
    int k = ans.size();
    forn(k)
    {
        minans += (ans[k - 1 - i] * v[i]);
        maxans += (ans[k - 1 - i] * v[n - i - 1]);
    }
    cout << minans << " " << maxans << endl;

    return 0;
}
