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
int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<int>> grid(2, vector<int>(n, 0));
    int blocked = 0;
    while (q--)
    {
        int r, c;
        cin >> r >> c;
        r--;
        c--;
        grid[r][c] = 1 - grid[r][c];
        for (int i = -1; i <= 1; ++i)
        {
            if (c + i < 0 && c + i > n)
                continue;
            if (grid[1 - r][c + i] == 1)
            {
                if (grid[r][c] == 1)
                    blocked++;
                else
                    blocked--;
            }
        }
        if (blocked == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
