#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    unordered_map<int, string> mp;
    vector<string> v = {"zero",
                        "one",
                        "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = 0; i < v.size(); i++)
    {
        mp[i] = v[i];
    }
    string s;
    cin >> s;
    int n=stoi(s);
    string ans = "";
    if (s.size() == 2)
    {
        if(n%10==0)
        {
            ans=ans+
        }
        ans = ans + mp[s[0]-'0'] + "ty-" + mp[s[1]-'0'];
    }
    else
    {
        ans = ans + mp[s[0]-'0'];
    }
    cout << ans << endl;
    return 0;
}