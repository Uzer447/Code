#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int absdiff(vi &v, int mid,int n)
{
    int ans=0;
    for (int i = 0; i < n - 1; i++)
    {
        int x=v[i];
        int y=v[i+1];
        if (v[i] == -1)
        {
            x=mid;
        }
        if(v[i+1]==-1)
        {
            y=mid;
        }
        ans=max(ans,abs(y-x));
    }
    return ans;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        rep(i, n) cin >> v[i];
        int mx=0;
        int mn=(int)1e9;
        if(v[0]==-1 && v[1]!=-1)
        {
            mx=max(mx,v[1]);
            mn=min(mn,v[1]);
        }
        if(v[n-1]==-1 && v[n-2]!=-1)
        {
            mx=max(mx,v[n-2]);
            mn=min(mn,v[n-2]);
        }
        for(int i=1; i<n-1; i++)
        {
            if(v[i]==-1)
            {
                mx=max(mx,max(v[i-1],v[i+1]));
                if(v[i+1]!=-1)
                mn=min(mn,v[i+1]);
                if(v[i-1]!=-1)
                mn=min(mn,v[i-1]);
            }
        }
        ll ans=mx+mn;
        ans/=2;
        cout<<absdiff(v,ans,n)<<" "<<ans<<endl;
    }

    return 0;
}
