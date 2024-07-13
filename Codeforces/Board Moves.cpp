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
vector<ll> dp(SIZE);
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    dp[1]=0;
    dp[3]=8;
    for(ll i=5;i<SIZE;i+=2)
    {
        dp[i]=(2LL*i+2LL*(i-2))*(i/2)+dp[i-2];
    }
    while (t--)
    {
        int n;
        cin>>n;
        cout<<dp[n]<<endl;
    }

    return 0;
}
