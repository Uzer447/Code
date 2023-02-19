#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int flag = 0;
        int ans = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans = n / i;
                flag = 1;
                break;
            }
            if (flag)
                break;
        }
        cout << ans << " " << n - ans << endl;
    }

    return 0;
}
