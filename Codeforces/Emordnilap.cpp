#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll MAXN = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    vector<ll> fact(100001, 0);
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 2; i < fact.size(); i++)
    {
        fact[i] = ((fact[i - 1] % MAXN) * (i % MAXN));
    }
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
            cout << 0 << endl;
        else
        {
            ll x = n * (n - 1);
            ll y = fact[n];
            cout << ((x % MAXN) * (y % MAXN)) % MAXN << endl;
        }
    }

    return 0;
}