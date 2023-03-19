#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define vi vector<int>
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n == 1 || n == 2)
        cout << n << endl;
    else
    {
        int maxans = INT_MIN;
        int curr = 0;
        for (int i = 2; i < n; i++)
        {
            if (v[i] == v[i - 1] + v[i - 2])
            {
                curr++;
            }
            else
            {
                maxans = max(curr, maxans);
                curr = 0;
            }
        }
        maxans = max(curr, maxans);
        curr = 0;
        cout << maxans+2 << endl;
    }

    return 0;
}
