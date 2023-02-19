#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 0;
        int r = n - 1;
        int ans = n;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                ans -= 2;
            }
            else
                break;
            r--;
            l++;
        }
        cout << ans << endl;
    }

    return 0;
}
