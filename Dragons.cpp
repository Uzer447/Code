#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> x;
    // for (int i = 0; i < n; i++)
    // {
    //     int a;
    //     cin >> a;
    //     x.push_back(a);
    // }
    for (int i = 0; i < n; i++)
    {
        int l, b;
        cin >> l >> b;
        x.push_back({l, b});
    }
    sort(x.begin(), x.end());
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s <= x[i].first)
        {
            ans = false;
        }
        else
        {
            s += x[i].second;
        }
    }
    if (ans)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}