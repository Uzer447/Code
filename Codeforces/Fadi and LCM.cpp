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
ll lcm(ll i,ll j)
{
    return (i*j)/__gcd(i,j);
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll x;
    cin>>x;
    ll ans;
    for(ll i=1;i*i<=x;i++)
    {
        if(x%i==0 && lcm(i,x/i)==x)
        {
            ans=i;
        }
    }
    cout<<ans<<" "<<x/ans<<endl;

    return 0;
}
