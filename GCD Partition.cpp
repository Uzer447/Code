#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            total += a;
            v.push_back(a);
        }
        ll curr = 0;
        ll ans = 1;
        for (int i = 0; i < n - 1; i++)
        {
            total -= v[i];
            curr += v[i];
            ans = max(ans, __gcd(total, curr));
        }
        cout << ans << endl;
    }
    return 0;
}
