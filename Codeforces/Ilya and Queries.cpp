#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    int n = s.size();
    vector<int> v(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        if (s[i - 2] == s[i - 1])
        {
            v[i] = v[i - 1] + 1;
        }
        else
        {
            v[i] = v[i - 1];
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << v[r] - v[l] << endl;
    }
    return 0;
}
