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
        vector<int> v(n);
        int minele = INT_MAX;
        ll sum = 0;
        int neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
                neg++;
            sum += abs(v[i]);
            minele = min(minele, abs(v[i]));
        }
        if (neg % 2 == 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum - 2 * minele << endl;
        }
    }
    return 0;
}
