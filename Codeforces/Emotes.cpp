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
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n, m, k;
    cin >> n >> m >> k;
    vi v(n);
    rep(i, n)
            cin >>
        v[i];
    sort(vall(v));
    ll x = v[n - 1];
    ll y = v[n - 2];
    ll a = (m / (k + 1));
    ll b = (m % (k + 1));
    cout << a * (x * k + y) + b * x << endl;

    return 0;
}
