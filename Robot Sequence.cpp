#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
bool canreach(string s, int l, int r)
{
    int up = 0;
    int right = 0;
    for (int i = l; i <= r; i++)
    {
        if (s[i] == 'U')
            up++;
        else if (s[i] == 'D')
            up--;
        else if (s[i] == 'R')
            right++;
        else
            right--;
        cout << s[i];
    }
    cout << endl;
    if (up == 0 && right == 0)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0;
    int r = n - 1;
    bool dir = true;
    int ans = 0;
    while (l < r)
    {
        if (dir)
        {
            if (canreach(s, l, r))
                ans++;
            l++;
            dir = false;
        }
        else
        {
            if (canreach(s, l, r))
                ans++;
            r--;
            dir = true;
        }
    }
    cout << ans << endl;
    return 0;
}
