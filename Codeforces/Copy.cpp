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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n + 1);
        rep(i, n)
                cin >>
            a[i];
        rep(i, n + 1)
                cin >>
            b[i];
        ll x = b[n];
        ll ans = 0;
        ll k = 0;
        ll e = INT_MAX;
        rep(i, n)
        {
            k += abs(a[i] - b[i]);
            ll l = min(a[i], b[i]);
            ll r = max(a[i], b[i]);
            // cout<<l<<" "<<r<<endl;
            if (x >= l && x <= r)
            {
                ans = 1;
            }
            ll req = min(abs(l-x),abs(r-x));
            // cout<<req<<endl;
            e = min(e, req);
        }
        if (ans == 0)
            ans += e+1;
        cout << ans + k << endl;
    }

    return 0;
}
