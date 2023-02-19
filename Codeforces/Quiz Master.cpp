#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end(), greater<long long>());
        unordered_map<ll, ll> mp;
        unordered_map<ll, ll> x;
        vector<ll> ans;
        int flag = 1;
        for (int i = 2; i <= m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[j] % i == 0 && mp[v[j]] != 1)
                {
                    ans.push_back(v[j]);
                    mp[v[j]] = 1;
                    x[i] = 1;
                    break;
                }
                else if (v[j] % i == 0 && mp[v[j]] == 1)
                {
                    x[i] = 1;
                    break;
                }
            }
            if (x[i] == 0)
            {
                flag = 0;
                cout << -1 << endl;
                break;
            }
        }
        if (flag == 1)
        {
            sort(ans.begin(), ans.end());
            ll diff = ans.back() - ans[0];
            cout << diff << endl;
        }
    }

    return 0;
}
