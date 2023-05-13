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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (abs(v[i] - v[i - 1]) >= k && abs(v[i] - v[i + 1]) >= k)
            {
                cnt++;
                v[i]=v[i-1];
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
