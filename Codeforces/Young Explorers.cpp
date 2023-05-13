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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = 0, cur = 0;
        for (int i = 0; i < n; i++) {
            if (++cur == v[i]) {
                ans++;
                cur = 0;
            }
        }
        cout << ans << '\n';
        //cout<<endl;
    }

    return 0;
}
