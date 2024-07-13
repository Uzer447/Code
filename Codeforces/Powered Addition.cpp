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
        ll n;
        cin>>n;
        vector<ll> v(n);
        rep(i,n)
        cin>>v[i];
        ll maxdiff=0;
        sort(vall(v));
        rep(i,n-1)
        {
            if(v[i+1]>=v[i])
            {
                ll diff=v[i+1]-v[i];
                maxdiff=max(maxdiff,diff);
            }
        }
        //cout<<maxdiff<<endl;
        if(maxdiff==0)
        cout<<0<<endl;
        else
        cout<<ceil(log2(maxdiff))<<endl;
        //cout<<(1LL<<30LL)<<endl;
    }

    return 0;
}
