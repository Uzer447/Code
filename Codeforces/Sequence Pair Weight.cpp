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
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> dp(n, 0);
        map<long long, long long> value;
        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {
            if (i > 0)
                dp[i] = dp[i - 1];
            if (value.count(a[i]))
            {
                dp[i] += value[a[i]];
            }
            value[a[i]] += (i + 1);
            ans += dp[i];
        }
        cout << ans << endl;
    }
    return 0;
}
