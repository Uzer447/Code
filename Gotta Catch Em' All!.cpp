#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    unordered_map<char, ll> mp;
    string str = "Bulbasaur";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B' || s[i] == 'u' || s[i] == 'l' || s[i] == 'b' || s[i] == 'a' || s[i] == 's' || s[i] == 'r')
        {
            mp[s[i]]++;
        }
    }
    ll ans = INT_MAX;
    mp['u'] /= 2;
    mp['a'] /= 2;
    int flag = 0;
    for (auto i : str)
    {
        if (mp[i] == 0)
        {
            ans = 0;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        for (auto i : mp)
        {
            if (i.second == 0)
            {
                ans = 0;
                break;
            }
            ans = min(i.second, ans);
        }
    }
    if (ans == INT_MAX)
        ans = 0;
    cout << ans << endl;
    return 0;
}