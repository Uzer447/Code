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
        int n,l,r;
        cin>>n>>l>>r;
        vi v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        sort(vall(v));
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            int lb=l-v[i];
            int ub=r-v[i];
            int x=lower_bound(v.begin(),v.end(),lb)-v.begin();
            int y=upper_bound(v.begin(),v.end(),ub)-v.begin();
            //cout<<x<<" "<<y<<endl;
            ans=ans+y-x;
            if(l<=2*v[i] && 2*v[i]<=r)
            {
                ans--;
            }
        }
        cout<<ans/2<<endl;
    }

    return 0;
}
