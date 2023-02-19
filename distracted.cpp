#include <bits/stdc++.h>
using namespace std;
bool search(char a, string s, int k)
{
    for (int i = k; i < s.size(); i++)
    {
        if (a == s[i])
            return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_set<char> a;

        int change = 0;
        for (int i = 0; i < n - 1; i++)
        {
            a.insert(s[i]);
            if (s[i + 1] != s[i])
                change++;
        }
        a.insert(s[n - 1]);
        int k = a.size();
        int ans = k-change;
        if (ans == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}