#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    string o = "";
    forn(n)
    {
        if (s[i] == '1')
        {
            ans++;
        }
        else
        {
            char c = ans + 48;
            o.push_back(c);
            ans = 0;
        }
    }
    char c = ans + 48;
    o.push_back(c);
    cout << o << endl;
    return 0;
}
