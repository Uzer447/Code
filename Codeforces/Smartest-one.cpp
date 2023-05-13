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
        int cnt = 0;
        int x = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            x = max(x, v[i]);
        }
        if (count(v.begin(), v.end(), x)%2==0)
        {
            cout << "Jake" << endl;
        }
        else
            cout << "John" << endl;
    }

    return 0;
}
