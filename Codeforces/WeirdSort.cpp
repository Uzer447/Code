#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pii> p;
        vi v(n);
        rep(i,n)
        cin>>v[i];
        rep(i,m)
        {
            int x;
            cin>>x;
            p.pb({x-1,x});
        }
        sort(vall(p));
        vector<pii> segments;
        segments.pb(p[0]);
        for(int i=1;i<m;i++)
        {
            if(segments.back().second>=p[i].first)
            {
                segments.back().second=max(segments.back().second,p[i].second);
            }
            else
            {
                segments.pb(p[i]);
            }
        }
        for(int i=0;i<segments.size();i++)
        {
            sort(v.begin()+segments[i].first,v.begin()+segments[i].second+1);
        }
        int flag=1;
        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]<v[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
