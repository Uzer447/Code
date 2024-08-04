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
        ll n,k;
        cin>>n>>k;
        vector<ll> v;
        rep(i,n)
        {
            int x;
            cin>>x;
            v.pb(x);
        }
        vi ans(n);
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(k%2==0 && v[i]==k/2)
            {
                ans[i]=flag;
                flag=1-flag;
            }
            else if(2*v[i]<k)
            {
                ans[i]=0;
            }
            else
            {
                ans[i]=1;
            }
        }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }

    return 0;
}
