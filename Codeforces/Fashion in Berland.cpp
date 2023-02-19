#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    int zero = 0;
    forn(t)
    {
        int a;
        cin >> a;
        if (a == 0)
            zero++;
    }
    if (t == 1 && zero == 0)
    {
        cout << "YES" << endl;
    }
    else if (t == 1 && zero == 1)
    {
        cout << "NO" << endl;
    }
    else if (zero > 1 || zero == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}