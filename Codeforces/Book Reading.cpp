#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
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
        vector<ll> v;
        ll sum = 0;
        for (int i = 1; i <= 10; i++)
        {
            v.pb((m * i) % 10);
            sum += v[i - 1];
        }
        ll x = n / m;
        int i = x % 10;
        cout << (sum * (x / 10)) + accumulate(v.begin(), v.begin()+i,0) << endl;
    }

    return 0;
}
