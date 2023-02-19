#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "ABSINTH" || s == "BEER" || s == "BRANDY" || s == "CHAMPAGNE" || s == "GIN" || s == "RUM" || s == "SAKE" || s == "TEQUILLA" || s == "VODKA" || s == "WHISKEY" || s == "WINE")
        {
            cnt++;
        }
        else if (s[0] >= '0' && s[0] <= '9')
        {
            int x = stoi(s);
            if (x < 18)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
