#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n % 2 != k % 2)
            cout << "NO" << endl;
        else if (k * k > n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
