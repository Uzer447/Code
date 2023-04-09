#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            x ^= v[i];
        }
        if (x == 0)
        {
            cout << 0 << endl;
        }
        else if (x != 0)
        {
            if (n % 2 == 0)
            {
                if (x != 0)
                {
                    cout << -1 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else
            {
                cout << x << endl;
            }
        }
    }

    return 0;
}
