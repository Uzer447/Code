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
        ll n;
        cin >> n;
        vector<ll> a(n + 1);
        a[0] = 0;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = a[i] - i; j <= n; j += a[i])
            {
                if (j <= i)
                    continue;
                if (a[i] * a[j] == i + j)
                    ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
