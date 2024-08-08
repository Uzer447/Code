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
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<char>> v(n, vector<char>(n, ' '));
        int x1, x2, y1, y2;
        int cnt = 0;
        rep(i, n)
        {
            rep(j, n)
            {
                char x;
                cin >> x;
                v[i][j] = x;
                if (x == '*')
                {
                    if (cnt == 0)
                    {
                        x1 = i;
                        y1 = j;
                        cnt++;
                    }
                    else if (cnt == 1)
                    {
                        x2 = i;
                        y2 = j;
                    }
                }
            }
        }
        // cout<<x1<<" "<<y1<<endl;
        // cout<<x2<<" "<<y2<<endl;
        if (y1 != y2 && x1 != x2)
        {
            v[x1][y1] = '*';
            v[x1][y2] = '*';
            v[x2][y1] = '*';
            v[x2][y2] = '*';
        }
        else
        {
            if (y1 == y2)
            {
                if (y1 - 1 >= 0)
                {
                    v[x1][y1 - 1] = '*';
                    v[x2][y1 - 1] = '*';
                }
                else if (y1 + 1 < n)
                {
                    v[x1][y1 + 1] = '*';
                    v[x2][y1 + 1] = '*';
                }
            }
            if (x1 == x2)
            {
                if (x1 - 1 >= 0)
                {
                    v[x1 - 1][y1] = '*';
                    v[x1 - 1][y2] = '*';
                }
                else if (x1 + 1 < n)
                {
                    v[x1 + 1][y1] = '*';
                    v[x1 + 1][y2] = '*';
                }
            }
        }
        rep(i, n)
        {
            rep(j, n)
            {
                cout << v[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
