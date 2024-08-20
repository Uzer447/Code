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
void solve()
{
    int n;
    cin >> n;
    vi v(n + 1);
    rep(i, n)
    {
        cin >> v[i + 1];
    }
    if (v[1] == 1)
    {
        cout << n + 1 << " ";
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (v[i] == 0 && v[i + 1] == 1)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << n + 1 << " ";
            for (int j = i + 1; j <= n; j++)
            {
                cout << j << " ";
            }
            cout << endl;
            return;
        }
    }
    for (int i = 1; i <= n + 1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
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
