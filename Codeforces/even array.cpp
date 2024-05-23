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
        int n;
        cin >> n;
        vi v(n);
        int even = 0;
        int odd = 0;
        rep(i, n)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (n % 2 == 0)
        {
            if (odd == n / 2 && even == n / 2)
            {
                int cnt = 0;
                rep(i, n)
                {
                    if (v[i] % 2 != i % 2)
                        cnt++;
                }
                cout << cnt / 2 << endl;
            }
            else
                cout << -1 << endl;
        }
        else
        {
            if (2 * odd == n - 1)
            {
                int cnt = 0;
                rep(i, n)
                {
                    if (v[i] % 2 != i % 2)
                        cnt++;
                }
                cout << cnt / 2 << endl;
            }
            else
                cout << -1 << endl;
        }
    }

    return 0;
}
