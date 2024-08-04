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
        int n, m;
        cin >> n >> m;
        vector<vector<ll>> v(n, vector<ll>(m));
        for (int i = 0; i < n; i++)
        {
            rep(j, m)
            {
                cin >> v[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if((i+j)%2!=v[i][j]%2)
                {
                    v[i][j]++;
                }
            }
        }
        rep(i, n)
        {
            rep(j, m)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
