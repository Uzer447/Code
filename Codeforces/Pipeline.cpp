#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
bool check(ll n, ll k, ll mid)
{
    ll b = k * mid - (mid - 1) * (mid) / 2 - (mid - 1);
    return b >= n;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n, k;
    cin >> n >> k;
    ll b = k * k - (k - 1) * (k) / 2 - (k - 1);
    if (b < n)
    {
        cout << "-1";
        return 0;
    }
    ll l = 0, r = k;
    while (l < r)
    {
        ll mid = (l + r) / 2;
        if (check(n, k, mid))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l;
    return 0;
}
