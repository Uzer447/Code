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
        vector<int> v;
        int one = 0;
        int two = 0;
        forn(n)
        {
            int a;
            cin >> a;
            if (a == 1)
                one++;
            else
                two++;
            v.push_back(a);
        }
        int am = 0;
        int known = 0;
        int unknown = 0;
        int curr = 0;
        int ans = 0;
        int flag = -1;
        int odd = 0;
        int maxans = 0;
        forn(n)
        {
            if (v[i] == 2)
            {
                    known += unknown;
                    unknown = 0;
                    if(known>0)
                    maxans = max(maxans, (known + 2) / 2);
            }
            else
            {
                unknown++;
                if(known>0)
                maxans = max(maxans, (known + 2) / 2 + unknown);
                else
                maxans = max(maxans, unknown);
            }
        }
        maxans = max(maxans, ans);
        cout << maxans << endl;
    }
    return 0;
}
