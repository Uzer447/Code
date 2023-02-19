#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> mp;
    unordered_set<ll> st;
    forn(n)
    {
        ll a, x;
        cin >> a >> x;
        mp[a] = max(mp[a], x);
        st.insert(a);
    }
    ll m;
    cin >> m;
    forn(m)
    {
        ll b, x;
        cin >> b >> x;
        mp[b] = max(mp[b], x);
        st.insert(b);
    }
    ll ans = 0;
    for (auto it : st)
    {
        ans += mp[it];
    }
    cout << ans << endl;
    return 0;
}
