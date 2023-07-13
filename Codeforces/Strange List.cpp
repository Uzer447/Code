#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            v.push_back({a,1});
        }
        forn(v.size())
        {
            if (v[i].first % x == 0)
            {
                v.push_back({v[i].first/x,v[i].second * x});
            }
            else
                break;
        }
        ll sum=0;
        for (auto it : v)
        {
            sum+=(it.first*it.second);
        }
        cout << sum << endl;
    }

    return 0;
}
