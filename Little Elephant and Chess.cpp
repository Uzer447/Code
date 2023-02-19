#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n = 8;
    vector<vector<char>> board(n, vector<char>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (i >= 1)
        {
            if (board[i - 1][0] == 'W' && board[i][0] == 'W')
            {

                if (board[i][7] == 'W')
                {
                    ans = false;
                    break;
                }
            }
            else if (board[i - 1][0] == 'B' && board[i][0] == 'B')
            {

                if (board[i][7] == 'B')
                {
                    ans = false;
                    break;
                }
            }
        }
        for (int j = 1; j < n; j++)
        {
            if (board[i][j - 1] == board[i][j])
            {
                ans = false;
                break;
            }
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
