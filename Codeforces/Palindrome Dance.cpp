#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v;
    forn(n)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int cost = 0;
    forn((n / 2))
    {
        if (v[i] == 2 && v[n - 1 - i] == 2)
        {
            cost += (2 * min(a, b));
        }
        else if (v[i] != v[n - 1 - i] && v[i] != 2 && v[n - 1 - i] != 2)
        {
            cout << -1 << endl;
            return 0;
        }
        else if (v[i] != v[n - 1 - i])
        {
            if (v[i] == 2 || v[n - 1 - i] == 2)
            {
                if (v[i] == 2 && v[n - 1 - i] == 0)
                {
                    cost += a;
                    v[i] = v[n - 1 - i];
                }
                else if (v[i] == 2 && v[n - 1 - i] == 1)
                {
                    cost += b;
                    v[i] = v[n - 1 - i];
                }
                else if (v[n - 1 - i] == 2 && v[i] == 0)
                {
                    cost += a;
                    v[n - 1 - i] = v[i];
                }
                else if (v[n - 1 - i] == 2 && v[i] == 1)
                {
                    cost += b;
                    v[n - 1 - i] = v[i];
                }
            }
        }
    }
    if (n % 2 == 1 && v[n / 2] == 2)
        cost += min(a, b);
    cout << cost << endl;

    return 0;
}