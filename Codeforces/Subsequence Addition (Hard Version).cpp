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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1 && v[0] != 1)
        {
            cout << "NO" << endl;
        }
        else if (n == 1 && v[0] == 1)
        {
            cout << "YES" << endl;
        }
        else if (n == 2 && v[0] + v[1] != 2)
        {
            cout << "NO" << endl;
        }
        else if (n == 2 && v[0] + v[1] == 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            int flag = 1;
            sort(v.begin(), v.end());
            ll sum = 1;
            for (int i = 1; i < n; i++)
            {
                if (v[i] > sum)
                {
                    flag = 0;
                    break;
                }
                sum += v[i];
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
