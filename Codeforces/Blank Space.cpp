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
        vector<int> v(n);
        int cnt = 0;
        int maxcnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                cnt++;
            else
            {
                maxcnt = max(cnt, maxcnt);
                cnt = 0;
            }
        }
        maxcnt = max(cnt, maxcnt);
        cnt = 0;
        cout << maxcnt << endl;
    }

    return 0;
}
