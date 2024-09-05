#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
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
        int n,h;
        cin>>n>>h;
        vi v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        sort(vall(v));
        int x=v[n-1];
        int y=v[n-2];
        int ans;
        if(h%(x+y)==0)
        {
            ans=2*(h/(x+y));
        }
        else if(h%(x+y)<=x)
        {
            ans=2*(h/(x+y))+1;
        }
        else
        {
            ans=2*(h/(x+y))+2;
        }
        cout<<ans<<endl;
    }

    return 0;
}
