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
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ll temp = (i * (i + 1)) / 2;
        if (temp > n)
        {
            ans = i - 1;
            break;
        }
    }
    cout << ans << endl;
    forn(ans)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
    return 0;
}
