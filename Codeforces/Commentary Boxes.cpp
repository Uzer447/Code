#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll build = (m - (n % m)) * a;
    ll demolish = (n % m) * b;
    cout << min(build, demolish) << endl;
    return 0;
}