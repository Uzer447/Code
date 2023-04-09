#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int countVK(string &s, int n)
{
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            cnt++;
            s[i] = 'A';
            s[i + 1] = 'B';
        }
    }
    return cnt;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    int n = s.size();
    int ans = countVK(s, n);
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            ans++;
            break;
        }
    }

    // cout << s << endl;
    cout << ans << endl;

    return 0;
}
