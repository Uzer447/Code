#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll v(n);
        ll sum = 0;
        rep(i, n)
        {
            cin >> v[i];
        }
        rep(i, n)
        {
            if (v[i] <= 2048)
                sum += v[i];
        }
        if (sum >= 2048)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
