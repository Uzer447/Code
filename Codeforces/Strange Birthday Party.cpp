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
        int n,m;
        cin>>n>>m;
        //cout<<m<<endl;
        vi v(n+1);
        rep(i,n)
        {
            cin>>v[i+1];
        }
        vi c(m+1);
        rep(i,m)
        {
            cin>>c[i+1];
        }
        sort(v.begin()+1,v.end(),greater<int>());
        //reverse(vall(v));
        int left=1;
        ll ans=0;
        // for(auto it:v)
        // cout<<it<<" ";
        // cout<<endl;
        for(int i=1;i<=n;i++)
        {
            // cout<<min(c[v[i]],c[left])<<endl;
            ans+=min(c[v[i]],c[left]);
            if(c[left]<c[v[i]])
            {
                left++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
