#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
bool canclaim(vector<vector<int>> &v, int n, int m, int i, int j)
{
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        // cout<<x<<" "<<y<<endl;
        if (x >= 0 && y >= 0 && x < n && y < m && v[x][y] == 1)
            return false;
    }
    return true;
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
        vector<vector<int>> v(n, vector<int>(m, 0));
        forn(n)
        {
            for (int j = 0; j < m; j++)
            {
                int a;
                cin >> a;
                v[i][j] = a;
            }
        }
        int ans = 0;
        forn(n)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == 0 && canclaim(v, n, m, i, j))
                {
                    ans++;
                    v[i][j] = 1;
                }
            }
        }
        if (ans % 2 == 0)
            cout << "Vivek" << endl;
        else
            cout << "Ashish" << endl;
        // cout<<ans<<endl;
    }

    return 0;
}
