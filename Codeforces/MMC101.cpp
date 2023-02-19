#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
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
        char a;
        cin >> a;
        string s;
        cin >> s;
        vector<int> indr;
        vector<int> indg;
        int maxans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == a)
            {
                int ans = 0;
                int j = (i + 1) % n;
                while (s[j] != 'g')
                {
                    ans++;
                    j++;
                    j %= n;
                }
                maxans = max(maxans, ans);
                ans = 0;
            }
        }
        if (a == 'g')
            cout << 0 << endl;
        else
            cout << maxans + 1 << endl;
    }
    return 0;
}