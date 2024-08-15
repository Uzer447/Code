#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pll pair<long long,long long>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
bool cmp(pll a, pll b)
{
    return a.second<b.second;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    //cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<pll> v;
        ll tot=0;
        rep(i,n)
        {
            ll a,b;
            cin>>a>>b;
            v.pb({a,b});
            tot+=a;
        }
        sort(vall(v),cmp);
        ll l=0;
        ll r=1e15;
        ll ans=0;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            ll bought=mid;
            rep(i,n)
            {
                if(bought>=v[i].second)
                {
                    bought+=v[i].first;
                }
            }
            if(bought>=tot)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans+tot<<endl;
    }

    return 0;
}
