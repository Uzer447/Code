#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < 2 * n; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        cout << v[n] - v[n - 1] << endl;
    }
    
    return 0;
}