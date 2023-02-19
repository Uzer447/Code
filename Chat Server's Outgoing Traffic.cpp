#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int p = 0;
    int ans = 0;
    for (int i = 0; i < 100; i++)
    {
        string s;
        getline(cin, s);
        if (s[0] == '+')
            p++;
        else if (s[0] == '-')
            p--;
        else
        {
            int l = 0;
            int ind = find(s.begin(), s.end(), ':') - s.begin();
            for (int i = ind + 1; i < s.size(); i++)
            {
                l++;
            }
            ans += l * p;
        }
    }
    cout << ans << endl;
    return 0;
}
