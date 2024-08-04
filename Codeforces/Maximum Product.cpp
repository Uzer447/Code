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
        int n;
        cin>>n;
        vll v(n);
        long long mx=-1e9;
        rep(i,n)
        {
            cin>>v[i];
            mx=max(mx,v[i]);
        }
        sort(vall(v),[](long long x,long long y){return abs(x)>abs(y);});
        if(mx<0)
        {
            cout<<v[n-5]*v[n-1]*v[n-2]*v[n-3]*v[n-4]<<endl;
        }
        else
        {
            ll ans=v[0]*v[1]*v[2]*v[3]*v[4];
            for(int i=5;i<n;i++)
            {
                for(int j=0;j<5;j++)
                {
                    ll temp=v[i];
                    for(int k=0;k<5;k++)
                    {
                        if(k!=j)temp*=v[k];
                    }
                    ans=max(ans,temp);
                }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
