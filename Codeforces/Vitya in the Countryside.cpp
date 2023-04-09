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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1 && v[n-1]!=15 && v[n-1]!=0)
        cout << -1 << endl;
    else
    {
        string ans = "";
        forn(n - 1)
        {
            if (v[i + 1] > v[i])
                ans = "UP";
            else
                ans = "DOWN";
        }
        if(v[n-1]==15)
        ans="DOWN";
        if(v[n-1]==0)
        ans="UP";
        cout << ans << endl;
    }
    return 0;
}
