#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int maxdistinct(string s, int l, int n)
{
    unordered_set<char> a;
    unordered_set<char> b;
    forn(l)
    {
        a.insert(s[i]);
    }
    for (int i = l; i < n; i++)
    {
        b.insert(s[i]);
    }
    return a.size() + b.size();
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int ans = maxdistinct(s,0,n);
        unordered_set<char> a;
        for (int i = 0; i < n; i++)
        {
            if (a.count(s[i]) == 0)
            {
                a.insert(s[i]);
            }
            else
            {
                ans = maxdistinct(s, i, n);
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
