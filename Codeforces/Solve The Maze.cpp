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
ll n, m;
ll dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool valid(ll i, ll j) { return i >= 1 && i <= n && j >= 1 && j <= m; }
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        char arr[n+1][m+1];
        for (ll i = 1; i <= n; i++)
        {
            cin >> (arr[i] + 1);
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                if (arr[i][j] == 'B')
                {
                    for (ll k = 0; k < 4; k++)
                    {
                        ll ni = i + dir[k][0];
                        ll nj = j + dir[k][1];
                        if (valid(ni, nj) && arr[ni][nj] == '.')
                            arr[ni][nj] = '#';
                    }
                }
            }
        }
        queue <pii> que;
        bool visited[n + 5][m + 5];
        memset(visited, false, sizeof(visited));
        if (arr[n][m] == '.')
        {
            que.push({n, m});
            visited[n][m] = true;
        }
        while (!que.empty())
        {
            auto curr = que.front();
            que.pop();
            for (ll k = 0; k < 4; k++)
            {
                ll ni = curr.first + dir[k][0];
                ll nj = curr.second + dir[k][1];
                if (valid(ni, nj) && !visited[ni][nj] && arr[ni][nj] != '#')
                {
                    que.push({ni, nj});
                    visited[ni][nj] = true;
                }
            }
        }
        bool good = true;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                if ((arr[i][j] == 'G' && !visited[i][j]) or
                    (arr[i][j] == 'B' && visited[i][j]))
                {
                    good = false;
                    break;
                }
            }
        }
        cout << (good ? "Yes" : "No") << endl;
    }

    return 0;
}
