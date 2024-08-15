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
const int MAX = 2e3 + 5;
ll dp[MAX][MAX], v[MAX];
ll func(int l,int r)
{
    if(dp[l][r]!=-1)
    return dp[l][r];
    if(l==r)
    return 0;
    return dp[l][r]=v[r]-v[l]+min(func(l+1,r),func(l,r-1));
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    while (t--)
    {
        int n;
        cin>>n;
        rep(i,n)
        {
            cin>>v[i];
        }
        sort(v,v+n);
        memset(dp,-1,sizeof(dp));
        cout<<func(0,n-1)<<endl;
    }

    return 0;
}
