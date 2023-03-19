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
    int mid = 0;
    int r = 0;
    int l = 0;
    string rs = "";
    string ls = "";
    forn(s.size())
    {
        if (s[i] == '|')
        {
            mid = 1;
            continue;
        }
        if (mid)
        {
            r++;
            rs.push_back(s[i]);
        }
        else
        {
            l++;
            ls.push_back(s[i]);
        }
    }
    string x;
    cin >> x;
    forn(x.size())
    {
        if (l < r)
        {
            l++;
            ls.push_back(x[i]);
        }
        else
        {
            r++;
            rs.push_back(x[i]);
        }
    }
    if (l == r)
        cout << ls + "|" + rs << endl;
    else
        cout << "Impossible" << endl;
    return 0;
}
