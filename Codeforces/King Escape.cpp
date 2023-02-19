#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int ax, ay;
    cin >> ax >> ay;
    int bx, by;
    cin >> bx >> by;
    int cx, cy;
    cin >> cx >> cy;
    vector<vector<int>> board(n, vector<int>(n, 0));
    int x = ax;
    int y = ay;
    while (x >= 0)
    {
        board[x][y] = 1;
        x--;
    }
    x = ax;
    y = ay;
    while (x < n)
    {
        board[x][y] = 1;
        x++;
    }
    x = ax;
    y = ay;
    while (y < n)
    {
        board[x][y] = 1;
        y++;
    }
    x = ax;
    y = ay;
    while (y >= 0)
    {
        board[x][y] = 1;
        y--;
    }
    while(x>=0 && y<n)
    {
        board[x][y] = 1;
        x--;
        y++;
    }
    x = ax;
    y = ay;
    while (x<n && y<n)
    {
        board[x][y] = 1;
        x++;
        y++;
    }
    x = ax;
    y = ay;
    while (x>=0 && y>=0)
    {
        board[x][y] = 1;
        x--;
        y--;
    }
    x = ax;
    y = ay;
    while (x<n && y>=0)
    {
        board[x][y] = 1;
        x++;
        y--;
    }
    forn(n)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j];
        }
        cout<<endl;
    }
    return 0;
}
