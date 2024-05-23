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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int x = c + b - a - a + n;
        if (x % 3 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        x /= 3;
        int y = x - b + a;
        int z = x - c + a;
        // cout << x << " " << y << " " << z << endl;
        // cout << a + x << " " << b + y << " " << c + z << endl;
        if (x < 0 || y < 0 || z < 0)
            cout << "NO" << endl;
        else if (a + x == b + y && a + x == c + z && b + y == c + z)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
