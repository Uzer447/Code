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
ll gcd(ll x, ll y)
{
	if(y==0) return x;
	else return gcd(y,x%y);
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n+1);
        rep(i,n)
        {
            cin>>v[i+1];
        }
        vector<ll> prefix(n+1);
        vector<ll> suffix(n+1);
        prefix[1]=v[1];
        suffix[n]=v[n];
        for(int i=2;i<=n;i++)
        {
            prefix[i]=gcd(prefix[i-1],v[i]);
        }
        for(int i=n-1;i>=1;i--)
        {
            suffix[i]=gcd(suffix[i+1],v[i]);
        }
        ll ans;
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            {
                ans=suffix[i+1];
            }
            else if(i==n)
            {
                ans=ans*prefix[i-1]/gcd(prefix[i-1],ans);
            }
            else
            {
                ans=ans*gcd(prefix[i-1],suffix[i+1])/gcd(ans,gcd(prefix[i-1],suffix[i+1]));
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
