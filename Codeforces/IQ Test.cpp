#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    vector<vector<char>> v(4, vector<char>(4, ' '));
    forn(4)
    {
        for (int j = 0; j < 4; j++)
        {
            char x;
            cin >> x;
            v[i][j] = x;
        }
    }
    int flag = 1;
    forn(3)
    {
        for (int j = 0; j < 3; j++)
        {
            int h = 0;
            int d = 0;
            if (v[i][j + 1] == '#')
                h++;
            else
                d++;
            if (v[i + 1][j] == '#')
                h++;
            else
                d++;
            if (v[i + 1][j + 1] == '#')
                h++;
            else
                d++;
            if (v[i][j] == '#')
                h++;
            else
                d++;
            if (h >= 3 || d >= 3)
            {
                cout << "YES" << endl;
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }
    if (flag)
        cout << "NO" << endl;

    return 0;
}
