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
int longestPalinSubseq(vi &a)
{
    vi b(vall(a));
    reverse(b.begin(), b.end());
    int dp[a.size() + 1][b.size() + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= a.size(); i++) {
        for (int j = 1; j <= b.size(); j++) {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    return dp[a.size()][b.size()];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vi v(n);
        rep(i,n)cin>>v[i];
        if(longestPalinSubseq(v)>=3)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}
