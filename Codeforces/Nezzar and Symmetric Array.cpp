#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define int long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define print(X) cout << X << endl;
using namespace std;
const int maxn = 200007;
int a[maxn], b[maxn], d[maxn];
void solve()
{
    int n;
    cin >> n;
    vi v(2 * n);
    rep(i, 2 * n)
    {
        cin >> v[i];
    }
    sort(vall(v), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (v[2 * i] != v[2 * i + 1])
        {
            no return;
        }
        b[i] = v[2 * i];
    }
    for (int i = 1; i < n; i++)
    {
        if (b[i - 1] == b[i] || (b[i - 1] - b[i]) % (2 * (n - i)))
        {
            no return;
        }
        d[i] = (b[i - 1] - b[i]) / (2 * (n - i));
    }
    for (int i = 1; i < n; ++i)
    {
        b[n - 1] -= 2 * i * d[i];
    }
    if (b[n - 1] <= 0 || b[n - 1] % (2 * n))
        cout << "NO\n";
    else
        cout << "YES\n";
}
signed main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0LL;
}
