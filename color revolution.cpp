#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll d = k * k * k + k * k + k + 1;
        ll x = n / d;
        cout << x << " " << k * x << " " << k * k * x << " " << k * k * k * x << endl;
    }
    return 0;
}
