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
    ll n;
    cin >> n;
    vector<ll> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
    }
    vector<ll> prefix(n + 5);
    prefix[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] | v[i];
    }
    vector<ll> suffix(n + 5);
    suffix[n + 1] = 0;
    for (ll i = n; i >= 1; i--)
    {
        suffix[i] = suffix[i + 1] | v[i];
    }
    ll ind = -1;
    ll maxans = -1;
    for (ll i = 1; i <= n; i++)
    {
        ll m = prefix[i - 1] | suffix[i + 1];
        ll ans = (v[i] | m) - m;
        if (ans>maxans)
        {
            maxans = ans;
            ind = i;
        }
    }
    swap(v[ind], v[1]);
    rep(i, n)
            cout
        << v[i + 1] << " ";
    cout << endl;
    return 0;
}
