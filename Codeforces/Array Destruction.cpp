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
vector<int> check(int n, vi &v, int x)
{
    multiset<int> st;
    for (auto e : v)
        st.insert(e);
    vi res;
    for (int i = 0; i < n; i++)
    {
        auto it1 = st.end();
        it1--;
        int y = x - *it1;
        st.erase(it1);
        auto it2 = st.find(y);
        if (it2 == st.end())
        {
            return {};
        }
        res.pb(x - y);
        res.pb(y);
        x = max(x - y, y);
        st.erase(it2);
    }
    return res;
}
void solve()
{
    int n;
    cin >> n;
    vi v(2 * n);
    rep(i, 2 * n)
    {
        cin >> v[i];
    }
    sort(vall(v));
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int x = v[i] + v[2 * n - 1];
        vi res = check(n, v, x);
        if (res.size())
        {
            yes
                print(x);
            for (int j = 0; j < 2 * n; j += 2)
            {
                cout << res[j] << " " << res[j + 1] << endl;
            }
            return;
        }
    }
    cout << "NO" << endl;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
