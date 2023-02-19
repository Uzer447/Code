#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string ans = "";
    for (int i = 1; i <= 10000; i++)
    {
        ans = ans + to_string(i);
    }
    int k;
    cin >> k;
    cout << ans[k - 1] << endl;
    return 0;
}
