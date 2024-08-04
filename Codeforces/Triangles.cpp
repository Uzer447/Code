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
const int MAX_N = 2000;
const int inf = MAX_N + 9;

char a[MAX_N + 5][MAX_N + 5];

void solve(int n, int ans[])
{
    int i, j;
    int mnr[10], mxr[10] = {0}, mnc[10], mxc[10] = {0};
    fill(mnr, mnr + 10, inf);
    fill(mnc, mnc + 10, inf);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            int x = a[i][j] - '0';
            mnr[x] = min(mnr[x], i), mxr[x] = max(mxr[x], i);
            mnc[x] = min(mnc[x], j), mxc[x] = max(mxc[x], j);
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            int x = a[i][j] - '0';
            ans[x] = max(ans[x], max(mxr[x] - i, i - mnr[x]) * max(n - j, j - 1));
            ans[x] = max(ans[x], max(mxc[x] - j, j - mnc[x]) * max(n - i, i - 1));
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i] + 1;
        int ans[10] = {0};
        solve(n, ans);
        for (int i = 0; i < 10; i++)
            cout << ans[i] << (i == 9 ? '\n' : ' ');
    }
}
