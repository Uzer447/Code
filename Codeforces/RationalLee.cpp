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
const int SIZE = 2e5 + 7;
vector<int> v[SIZE];
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i <= n; i++)
            v[i].clear();
        ll a[n], w[k];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> w[i];
        }
        sort(w, w + k);
        sort(a, a + n);
        for (int i = 0; i < k / 2; i++)
            swap(w[i], w[k - i - 1]);
        int po = 0;
        for (int i = 0; i < n - k; i++)
        {
            while (w[po] == v[po].size() + 1)
                po++;
            v[po].push_back(a[i]);
        }
        ll ans = 0;
        int qf = 1;
        for (int i = 0; i < k; i++)
        {
            ans += a[n - i - 1];
            if (v[i].size())
                ans += v[i][0];
            else
                ans += a[n - qf], qf++;
        }

        cout << ans << '\n';
    }
    return 0;
}
