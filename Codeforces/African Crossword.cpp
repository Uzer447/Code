#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
bool correct(vector<vector<char>> &v, char c, int x, int y, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (i != x && v[i][y] == c)
            return false;
    }
    for (int i = 0; i < m; i++)
    {
        if (i != y && v[x][i] == c)
            return false;
    }
    return true;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m, ' '));
    forn(n)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            v[i][j] = x;
        }
    }
    string ans = "";
    forn(n)
    {
        for (int j = 0; j < m; j++)
        {
            if (correct(v, v[i][j], i, j, n, m))
                ans.push_back(v[i][j]);
        }
    }
    cout << ans << endl;

    return 0;
}
