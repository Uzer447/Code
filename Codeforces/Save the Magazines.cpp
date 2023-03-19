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
        cin>>n;
        string s;
        cin>>s;
        vector<pair<int,char>> v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back({a,s[i]});
        }
        for(int i=1;i<n;i++)
        {
            if(v[i].second=='1')
            {
                if(v[i-1].second=='0')
                {
                    if(v[i-1].first>v[i].first)
                    {
                        v[i-1].second='1';
                        v[i].second='0';
                    }
                }
            }
        }
        ll sum=0;
        forn(n)
        {
            if(v[i].second=='1')
            sum+=v[i].first;
        }
        cout<<sum<<endl;

    }

    return 0;
}
