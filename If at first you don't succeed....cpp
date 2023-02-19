#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int g1 = a - c;
    int g2 = b - c;
    int g3 = c;
    int g4 = n - a - b + c;
    if (g1 >= 0 && g2 >= 0 && g3 >= 0 && g4 >= 1)
        cout << n - (a + b - c) << endl;
    else
        cout << -1 << endl;
    return 0;
}
