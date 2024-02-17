#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> pref1(n + 1);
    pref1[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pref1[i] = pref1[i - 1] + v[i - 1];
    }
    sort(v.begin(), v.end());
    vector<ll> pref2(n + 1);
    pref2[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pref2[i] = pref2[i - 1] + v[i - 1];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << pref1[r] - pref1[l - 1] << endl;
        }
        else
        {
            cout << pref2[r] - pref2[l - 1] << endl;
        }
    }
    return 0;
}
