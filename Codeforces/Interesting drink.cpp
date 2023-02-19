#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    ll q;
    cin >> q;
    while (q--)
    {
        ll m;
        cin >> m;
        ll ans = upper_bound(v.begin(), v.end(), m) - v.begin();
        cout << ans << endl;
    }
    return 0;
}
