#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
bool iscorrect(int n, ll k)
{
    ll sum = 0;
    bool flag = false;
    while (n > 0)
    {
        sum += n % 10;
        if (n % 10 == 0 && flag == false)
            flag = true;
        n /= 10;
    }
    ll temp = (k * (k + 1)) / 2;
    if (sum >= temp && flag)
        return true;
    return false;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n; ll k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (iscorrect(a, k))
            ans++;
    }
    cout << ans << endl;
    return 0;
}
