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
    int c = 0;
    int flag = 0;
    while (t--)
    {
        int a;
        cin >> a;
        if (a - 25 <= c)
        {
            c += 25;
            c-= (a-25);
        }
        else
        {
            cout << "NO" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "YES" << endl;
    return 0;
}
