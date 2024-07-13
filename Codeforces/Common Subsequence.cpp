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
        int n, m;
        cin >> n >> m;
        vi a(n);
        vi b(m);
        rep(i, n)
        {
            cin >> a[i];
        }
        int flag = 0;
        rep(i, m)
        {
            cin >> b[i];
            if (flag == 0)
            {
                rep(j, n)
                {
                    if (b[i] == a[j] && flag == 0)
                    {
                        cout << "YES" << endl;
                        cout << 1 << " " << a[j] << endl;
                        flag = 1;
                    }
                }
            }
        }
        if (flag == 0)
            cout << "NO" << endl;
    }

    return 0;
}
