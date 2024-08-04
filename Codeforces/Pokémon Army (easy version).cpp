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
        int n, q;
        cin >> n >> q;
        vi v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        vector<int64_t> d1(n + 1), d2(n + 1);
        d1[0] = -static_cast<int64_t>(1e18);
        d2[0] = 0;
        for (int i = 0; i < n; ++i)
        {
            d1[i + 1] = max(d1[i], d2[i] + v[i]);
            d2[i + 1] = max(d2[i], d1[i] - v[i]);
        }
        cout << max(d1[n], d2[n]) << endl;
    }

    return 0;
}
