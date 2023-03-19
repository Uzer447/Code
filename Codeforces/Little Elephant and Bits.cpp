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
    string ans = "";
    int ind = -1;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        forn(n - 1)
        {
            ans.push_back(s[i]);
        }
    }
    else
    {
        forn(n)
        {
            if (i != ind)
                ans.push_back(s[i]);
        }
    }
    cout << ans << endl;
    return 0;
}
