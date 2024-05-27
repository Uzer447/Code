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
    ll n,m,a;
    cin>>n>>m>>a;
    ll x=n%a;
    if(x!=0)
    x=a-x;
    ll y=m%a;
    if(y!=0)
    y=a-y;
    n+=x;
    m+=y;
    ll ans=(n*m)/(a*a);
    cout<<ans<<endl;

    return 0;
}
