#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    forn(n)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int cnt = 0;
    unordered_map<int, int> vis;
    vector<int> x;
    forn(n)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    forn(n)
    {
        if(cnt>=n)
        break;
        if (vis[x[i]] == 1)
        {
            cout << 0 << " ";
        }
        else
        {
            cout<<x[i]<<" "<<v[cnt]<<endl;
            while (x[i] != v[cnt])
                cnt++;
                cnt++;
            cout << cnt << " ";
        }

        // int ind = pos[a];
        // int cnt = 0;
        // for (int i = ind; i >= 0; i--)
        // {
        //     if (vis[v[i]] == 0)
        //     {
        //         vis[v[i]] = 1;
        //         cnt++;
        //     }
        // }
        // cout << cnt << " ";
    }
    return 0;
}