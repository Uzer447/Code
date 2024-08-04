#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define print(X) cout << X << endl;
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> v(n, vector<ll>(m));
        rep(i, n)
        {
            rep(j, m)
            {
                cin >> v[i][j];
            }
        }
        ll ans = 0;
        for (ll i = 0; 2 * i < n; i++)
        {
            for (ll j = 0; 2 * j < m; j++)
            {
                vector<ll> a;
                a.pb(v[i][j]);
                if (i != n - i - 1)
                    a.pb(v[n - i - 1][j]);
                if (j != m - j - 1)
                    a.pb(v[i][m - j - 1]);
                if (i != n - i - 1 && j != m - j - 1)
                    a.pb(v[n - i - 1][m - j - 1]);
                sort(vall(a));
                int x = a[(a.size() - 1) / 2];
                for (auto k : a)
                    ans += abs(x - k);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
