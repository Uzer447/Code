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
    int t;
    cin >> t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        ll k=(n-m)/(m+1);
        ll ans=(n*(n+1))/2;
        ans-=((k*(k+1))/2)*(m+1);
        ans-=((k+1)*((n-m)%(m+1)));
        cout<<ans<<endl;
    }

    return 0;
}
