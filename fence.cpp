#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    forn(n)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    ll sum = 0;
    forn(k)
    {
        sum += v[i];
    }
    ll minsum = sum;
    ll ind = 0;
    for (int i = 1; i < n-1; i++)
    {
        if (i + k >= n)
        {
            break;
        }
        sum -= v[i - 1];
        sum += v[i + k - 1];
        if (minsum > sum)
        {
            minsum = sum;
            ind = i;
        }
    }
    // if (minsum > sum)
    // {
    //     minsum = sum;
    //     ind = n - 1;
    // }
    cout << ind + 1 << endl;
    return 0;
}
