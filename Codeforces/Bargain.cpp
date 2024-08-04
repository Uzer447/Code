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
    int t=1;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            a[i] = s[i] - '0';
        }
        ll ans = 0;
        ll sum = 0;
        ll p = 1;
        for (ll i = n - 1; i >= 0; --i)
        {
            ll k = (i * (i + 1) / 2 % MOD * p % MOD + sum) % MOD;
            sum = (sum + p * (n - i) % MOD) % MOD;
            p = p * 10 % MOD;
            ans = (ans + a[i] * k % MOD) % MOD;
        }
        cout << ans << endl;
    }

    return 0;
}
