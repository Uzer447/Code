#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
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
    int minele = *min_element(v.begin(), v.end());
    vector<int> ind;
    forn(n)
    {
        if (v[i] == minele)
            ind.push_back(i);
    }
    sort(ind.begin(), ind.end());
    int ans = INT_MAX;
    for (int i = 0; i < ind.size() - 1; i++)
    {
        ans = min(ans, ind[i + 1] - ind[i]);
    }
    cout << ans  << endl;

    return 0;
}
