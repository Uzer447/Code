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
        int n, k;
        cin >> n >> k;
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            v.push_back({a,1});
        }
        for(int i = 0; i < n; i++)
        {
            if(v[i].first%k==0)
            {
                v.push_back({v[i].first/k,k*v[i].second});
            }
            else
            {
                break;
            }
        }
        ll sum=0;
        forn(v.size())
        {
            sum+=v[i].first*v[i].second;
        }
        cout<<sum<<endl;
    }
    return 0;
}
