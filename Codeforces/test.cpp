#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
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
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        vector<int> dp(n+2,0);
        dp[0]=1;
        if(s[0]=='C')
        dp[0]=1e9;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='C')
            dp[i]=1e9;
            else if(s[i]=='W')
            {
                dp[i]=dp[i-1]+1;
            }
            else
            {
                for(int j=1;j<=m;j++)
                {
                    if(i-j>=0)
                    dp[i]=min(dp[i],dp[i-j]);
                }
            }
        }
        cout<<dp[n]<<endl;
    }

    return 0;
}
