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
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] += i + 1;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        forn(n)
        {
            if (c >= v[i])
            {
                ans++;
                c -= v[i];
            }
            else
                break;
        }
        cout << ans << endl;
    }
    return 0;
}
