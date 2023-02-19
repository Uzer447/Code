#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s = "codeforces";
    int t;
    cin >> t;
    while (t--)
    {
        char a;
        cin >> a;
        int flag = 0;
        for (auto i : s)
        {
            if (i == a)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
