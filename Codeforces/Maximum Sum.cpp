#include <bits/stdc++.h>
#include<numeric>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
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
        int n,k;
        cin>>n>>k;
        vi v(n);
        rep(i,n)
        cin>>v[i];
        sort(vall(v));
        vll pr(n+1,0);
        ll ans=0;
        rep(i,n)
        {
            pr[i+1]=pr[i]+v[i];
        }
        rep(i,k+1)
        {
            ans = max(ans, pr[n - (k - i)] - pr[2 * i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}
