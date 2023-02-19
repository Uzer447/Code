#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    vector<string> v;
    unordered_map<string, string> mp;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        if (a.size() <= b.size())
        {
            mp[a] = a;
        }
        else
        {
            mp[a] = b;
        }
    }
    for (int i = 0; i < n; i++)
    {
        string k;
        cin >> k;
        v.push_back(mp[k]);
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}