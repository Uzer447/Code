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
    vi series;
    int i=5;
    series.pb(2);
    while(series.back()<=1000000001)
    {
        series.pb(i+series.back());
        i+=3;
    }
    // cout<<series.size()<<endl;
    // for(auto it:series)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int ans=0;
        while(n>=2)
        {
            ll x=(upper_bound(vall(series),n)-series.begin())-1;
            //cout<<series[x]<<endl;
            n-=series[x];
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
