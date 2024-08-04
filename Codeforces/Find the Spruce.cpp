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
int helper(int row, int col, vector<vector<char>> &ch, vector<vi> &dp)
{
    if (row < 0 || col < 0 || row >= ch.size() || col >= ch[0].size())
        return 0;
    if (dp[row][col] != -1)
        return dp[row][col];
    int ans = 0;
    if (ch[row][col] == '*')
    {
        ans = 1 + min(helper(row + 1, col - 1, ch, dp), min(helper(row + 1, col, ch, dp), helper(row + 1, col + 1, ch, dp)));
    }
    else
    {
        return dp[row][col] = 0;
    }
    return dp[row][col] = ans;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> v(n, vector<char>(m, ' '));
        vector<vector<int>> dp(n, vector<int>(m, -1));
        rep(i, n)
        {
            rep(j, m)
            {
                char c;
                cin >> c;
                v[i][j] = c;
            }
        }
        int ans = 0;
        rep(i, n)
        {
            rep(j, m)
            {
                helper(i, j, v, dp);
            }
        }
        rep(i, n)
        {
            rep(j, m)
            {
                if (dp[i][j] != -1)
                    ans += dp[i][j];
            }
        }
        print(ans);
    }

    return 0;
}