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
    string s;
    cin >> s;
    int open = 0;
    int out = 0;
    int in = 0;
    int ans = 0;
    int ans2 = 0;
    forn(n)
    {
        if (s[i] == '(')
        {
            open = 1;
            i++;
        }
        else if (s[i] == ')')
        {
            open = 0;
            i++;
        }
        if (open == 0)
        {
            if (s[i] != '_' && s[i] != '(' && s[i] != ')')
            {
                out++;
            }
            else
            {
                ans = max(out, ans);
                out = 0;
            }
        }
        else
        {
            if (s[i] != '_' && s[i] !=')')
            {
                in++;
            }
            else if ((s[i] == '_' || s[i+1] == ')'))
            {
                ans2++;
                in = 0;
            }
        }
    }
    cout << ans << " " << ans2 << endl;
    return 0;
}
