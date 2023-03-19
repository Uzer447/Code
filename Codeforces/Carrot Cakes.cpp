#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int a = (n * t) / k;
    if ((n * t)%k != 0)
        a++;
    int b = (k * d) / t;
    if ((k * d) % t != 0)
        b++;
    k *= 2;
    if (b < n)
    {
        int c = (n * t) / k;
        if ((n * t) % k != 0)
            c++;
        b += c;
    }
    cout<<a<<" "<<b<<endl;
    if (a > b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
