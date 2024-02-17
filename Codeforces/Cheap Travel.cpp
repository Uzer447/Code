#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
using namespace std;
int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int x = n / m;
    int ans = INT_MAX;
    if (n % m != 0)
        x++;
    for(int i = 0; i <= x; i++)
    {
        int temp = i * b;
        int left = max(0,n - (i * m));
        temp += left * a;
        ans = min(ans, temp);
    }
    cout << ans << endl;
    return 0;
}
