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
        int n;
        cin>>n;
        vi dp(n+1,1);
        vi v(n+1);
        rep(i,n)
        {
            cin>>v[i+1];
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=2*i;j<=n;j+=i)
            {
                if(v[i]<v[j])
                {
                    dp[j]=max(dp[j],dp[i]+1);
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}
