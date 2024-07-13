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
vector<ll> gao(vector<int> a)
{
    int n = a.size();
    vector<ll> res(n + 1);
    int i = 0;
    while (i < n)
    {
        if (a[i] == 0)
        {
            i++;
            continue;
        }

        int j = i;
        while (j < n && a[j] == 1)
        {
            j++;
        }
        for (int len = 1; len <= j - i; len++)
        {
            res[len] += j - i - len + 1;
        }
        i = j;
    }

    return res;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    ll n, m, k;
    cin >> n >> m >> k;
    vi a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    vi b(m);
    rep(i, m)
    {
        cin >> b[i];
    }
    ll ans = 0;
    vector<ll> ga = gao(a);
    vector<ll> gb = gao(b); 
    for (int i = 1; i < ga.size(); i++)
    {
        if (k % i == 0 && k / i <= m)
        {
            ans += (ga[i] * gb[k / i]);
        }
    }
    cout << ans << endl;
    return 0;
}
