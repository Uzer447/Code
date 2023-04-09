#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
ll determinant(ll a, ll b, ll c)
{
    ll temp = b;
    temp -= sqrt(4*a*c);
    return temp;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> k(n);
        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
        }
        vector<vector<ll>> v;
        for (int i = 0; i < m; i++)
        {
            ll a, b, c;
            cin >> a >> b >> c;
            v.push_back({a, b, c});
        }
        sort(k.begin(), k.end());
        vector<int> ans(m, 0);
        unordered_map<ll, int> mp;
        for (int j = 0; j < m; j++)
        {
            ll a = v[j][0]; 
            ll b = v[j][1];
            ll c = v[j][2];
            if (c >= 0)
            {
                ll r = determinant(a, b, c);
                auto it=lower_bound(k.begin(), k.end(),r);
                //cout<<*it<<endl;
                if (it!=k.begin() || it==k.end())
                {
                    cout << "NO" << endl;
                    //cout << *(it-1) << endl;   
                    //mp[r] = 1;
                    
                }
                else if(mp[r]==0)
                {
                    cout << "YES" << endl;
                    cout<<*it<<endl;
                    mp[r] = 1;
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
