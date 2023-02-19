#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        int mina = INT_MAX;
        int minb = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            mina = min(x, mina);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
            minb = min(x, minb);
        }
        long long diffa;
        long long diffb;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            diffa = abs(mina - a[i]);
            diffb = abs(minb - b[i]);
            ans += max(diffa, diffb);
        }
        cout << ans << endl;
    }
    return 0;
}