#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int solve(vi &v, int bit)
{
    if (bit < 0)
        return 0;
    vi l;
    vi r;
    for (auto &it : v)
    {
        if (((1 << bit) & it) == 0)
        {
            l.pb(it);
        }
        else
            r.pb(it);
    }
    if (l.size() == 0)
        return solve(r, bit - 1);
    if (r.size() == 0)
        return solve(l, bit - 1);
    return min(solve(r, bit - 1), solve(l, bit - 1)) + (1 << bit);
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vi v(n);
    rep(i, n) cin >> v[i];
    cout << solve(v, 30) << endl;

    return 0;
}
