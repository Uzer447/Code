#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        forn(s.size())
        {
            if (ans == 0 || s[i] == 'A')
                ans++;
            else
            {
                ans--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
