#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    forn(n)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int maxans = INT_MIN;
    int curr = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            maxans = max(maxans, curr);
            curr = 0;
        }
        else
            curr++;
    }
    maxans = max(maxans, curr);
    curr = 0;
    cout << maxans + 1 << endl;
    return 0;
}
