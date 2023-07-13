#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool ans = true;
        int one = find(a.begin(), a.end(), 1) - a.begin();
        int neg = find(a.begin(), a.end(), -1) - a.begin();
        // cout<<one<<" "<<neg<<endl;
        forn(n)
        {
            if (a[i] != b[i])
            {
                if (b[i] > a[i] && i > one)
                {
                    continue;
                }
                else if (b[i] < a[i] && i > neg)
                {
                    continue;
                }
                else
                {
                    ans = false;
                    break;
                }
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
