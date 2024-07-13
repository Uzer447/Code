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
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vi v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        vi dp(n+1,0);
        int curr = 0;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            sum += v[i];
            while(sum-v[curr]>=l)
            {
                sum -= v[curr];
                curr++;
            }
            dp[i+1]=max(dp[i],dp[curr]+(sum>=l && sum<=r));
        }
        cout<<dp[n]<<endl;
    }

    return 0;
}
