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
        ll n, k;
        cin >> k >> n;
        vi a(n*k+1);
        for (int i = 1; i <= n * k; i++)
        {
            cin >> a[i];
        }
        ll x = (k + 1) / 2 - 1;
        x = k - x;
        ll z = n * k + 1;
        ll ans = 0;
        while (n--)
        {
            z -= x;
            if (z <= 0)
                break;
            ans += a[z];
        }
        cout << ans << endl;
    }

    return 0;
}
