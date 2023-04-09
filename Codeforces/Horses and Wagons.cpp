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
    sort(v.begin(), v.end());
    int cnt = 1;
    int ans = 0;
    forn(n - 1)
    {
        // cout<<ans<<endl;
        if (cnt == 3)
        {
            ans++;
            cnt = 0;
        }
        // cout<<(int)(v[i]&v[i+1])<<endl;
        if ((int)(v[i] & v[i + 1]) == 0)
        {
            ans++;
        }
        else
        {
            cnt++;
        }
    }
    if (cnt != 0)
        ans++;
    cout << ans << endl;
    return 0;
}
