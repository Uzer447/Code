#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> diff;
        for(int i=1;i<n;i++)
        {
        diff.pb(v[i-1]-v[i]);
        }
        sort(diff.begin(), diff.end());
        int res=v[n-1]-v[0];
        forn(k-1)
        {
            res+=diff[i];
        }
        cout<<res<<endl;
    return 0;
}
