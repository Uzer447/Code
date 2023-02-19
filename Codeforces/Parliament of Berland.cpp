#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll a, b;
    cin >> a >> b;
    ll last = b % 10;
    if (last % 2 == 1 && last != 1)
        cout << "NO" << endl;
    else
    {
        int flag = 0;
        vector<int> v;
        v.push_back(b);
        while (b >= a)
        {
            if (b == a)
            {
                flag = 1;
                break;
            }
            if (b % 10 == 1)
            {
                b = b / 10;
            }
            else
            {
                b /= 2;
            }
            v.push_back(b);
        }
        if (flag)
        {
            cout << "YES" << endl;
            cout << v.size() << endl;
            for (int i = v.size() - 1; i >= 0; i--)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
