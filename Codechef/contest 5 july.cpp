#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
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
        string t;
        string u;
        string ans = "";
        cin >> s >> t >> u;
        for (int i = 0; i < n; i++)
        {
            int k = 0;
            k = t[i] - s[i];
            cout << k << endl;
            int x = 0;
            if (k < 0)
            {
                k = abs(k);
                k--;
                x = u[i];
                
                x -= (122 - k);
            }
            x += k;
            if (x > 122)
            {
                x %= 123;
                x += 97;
            }
            // cout<<x<<endl;
            ans = ans + (char)x;
        }
        cout << ans << endl;
    }

    return 0;
}
