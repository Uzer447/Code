#include <bits/stdc++.h>
#define ll long long
using namespace std;
int ans = 0;
void solve(vector<int> &v, int n, int i, vector<int> &ds)
{
    if (i == n)
    {
        int sum = accumulate(ds.begin(), ds.end(), 0);
        if (sum % 360 == 0)
        {
            ans = 1;
        }
        return;
    }
    ds.push_back(v[i]);
    solve(v, n, i + 1, ds);
    ds.pop_back();
    ds.push_back(-v[i]);
    solve(v, n, i + 1, ds);
    ds.pop_back();
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int> ds;
    solve(v, n, 0, ds);
    if (ans == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}