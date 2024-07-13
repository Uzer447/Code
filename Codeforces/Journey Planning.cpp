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
    int t=1;
    while (t--)
    {
        int n;
        cin>>n;
        vi v(n);
        rep(i,n)
        cin>>v[i];
        unordered_map<int,ll> mp;
        for(int i=1;i<=n;i++)
        {
            mp[i-v[i-1]]+=v[i-1];
        }
        ll ans=0;
        for(auto &it:mp)
        {
            ans=max(ans,it.second);
        }
        cout<<ans<<endl;
    }

    return 0;
}
