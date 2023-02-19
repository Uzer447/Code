#include <bits/stdc++.h>
#define forn(n) for(int i=0; i<n; i++)
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        forn(n)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for (int i = 0; i <= n; i++)
        {
            if (i == 0 || v[i-1] < i)
            {
                if (i == n || v[i] > i)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}