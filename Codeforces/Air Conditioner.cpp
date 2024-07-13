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
        vector<pair<int,pii>> v;
        rep(i,n)
        {
            int t,l,h;
            cin>>t>>l>>h;
            v.pb({t,{l,h}});
        }
        sort(vall(v));
        int low=m;
        int high=m;
        int time=0;
        int flag=1;
        rep(i,n)
        {
            int t=v[i].first;
            int l=v[i].second.first;
            int h=v[i].second.second;
            low=low-(t-time);
            high=high+(t-time);
            time=t;
            low=max(low,l);
            high=min(high,h);
            if(low>high)
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
