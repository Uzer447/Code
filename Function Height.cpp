#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    if (k % n == 0)
        cout << k / n << endl;
    else
    {
        cout << 1 + k / n << endl;
    }
    return 0;
}