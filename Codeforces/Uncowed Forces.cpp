#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    vector<int> m;
    vector<int> w;
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        m.push_back(a);
    }
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        w.push_back(a);
    }
    int hs, hu;
    cin >> hs >> hu;
    int ans = 0;
    int val = 500;
    forn(5)
    {
        int x = (3 * val) / 10;
        int y = (((250 - m[i]) * val) / 250) - 50 * w[i];
        ans += max(x, y);
        val += 500;
    }
    ans += hs * 100;
    ans -= hu * 50;
    cout << ans << endl;
    return 0;
}