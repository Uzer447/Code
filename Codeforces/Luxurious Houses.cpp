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
    // vector<int> suf(n,0);
    // suf[n-1]=v[n-1];
    // for(int i=n-2;i>=0;i--)
    // {
    //     suf[i]=max(suf[i+1],v[i]);
    // }
    int maxh = v[n - 1];
    vector<int> ans;
    ans.push_back(0);
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] <= maxh)
        {
            ans.push_back(maxh - v[i] + 1);
        }
        else
        {
            ans.push_back(0);
            maxh = v[i];
        }
    }
    for (int i = n - 1; i >= 0; i--)
        cout << ans[i] << " ";
    cout << endl;

    return 0;
}
