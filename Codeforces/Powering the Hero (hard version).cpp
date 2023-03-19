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
        ll ans = 0;
        priority_queue<int> pq;
        forn(n)
        {
            int a;
            cin >> a;
            if (a == 0 && !pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
            else if (a > 0)
            {
                pq.push(a);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
