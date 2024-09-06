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
        vll v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        if (n % 2 == 1)
        {
            if (v[0] + v[1] != 0)
            {
                cout << -1 * v[2] << " " << -1 * v[2] << " " << (v[0] + v[1]) << " ";
            }
            else if (v[0] + v[2] != 0)
            {
                cout << -1 * v[1] << " " << (v[0] + v[2]) << " " << -1 * v[1] << " ";
            }
            else
            {
                cout << (v[2] + v[1]) << " " << -1 * v[0] << " " << -1 * v[0] << " ";
            }
            for (int i = 3; i < n; i += 2)
            {
                cout << -1 * v[i + 1] << " " << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < n - 1; i += 2)
            {
                cout << -1 * v[i + 1] << " " << v[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
