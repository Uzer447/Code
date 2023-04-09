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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        ll sumall = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sumall += v[i];
        }
        vector<int> pf(n + 1);
        pf[0] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            pf[i] = pf[i - 1] + v[i - 1];
        }
        // for(auto i:pf)
        // cout<<i<<" ";
        // cout<<endl;
        while (q--)
        {
            int temp=sumall;
            int l, r, k;
            cin >> l >> r >> k;
            int sum = pf[r] - pf[l - 1];
            sumall -= sum;
            sumall += ((r - l + 1) * k);
            if (sumall % 2 == 0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            sumall=temp;
        }
    }

    return 0;
}
