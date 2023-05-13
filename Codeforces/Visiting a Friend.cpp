#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int prev = 0;
    int next = 0;
    int n, k;
    cin >> n >> k;
    int flag = 0;
    forn(n)
    {
        if (next >= k)
        {
            flag = 1;
            break;
        }
        int a, b;
        cin >> a >> b;
        if (a <= next && a >= prev && b > next)
        {
            prev = a;
            next = b;
        }
    }
    if (next >= k)
    {
        flag = 1;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}