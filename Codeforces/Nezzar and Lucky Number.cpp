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
        int q,d;
        cin>>q>>d;
        vi dp(207,0);
        dp[0]=1;
        if(!d)
        d+=10;
        int mx=d*10;
        for(int i=0;10*i+d<=mx;i++)
        {
            for(int j=0;10*i+d+j<=mx;j++)
            {
                dp[10*i+d+j]|=dp[j];
            }
        }
        while(q--)
        {
            int u;
            cin>>u;
            if(u>=mx || dp[u]==1)
            {
                yes
            }
            else
            no
        }
    }

    return 0;
}
