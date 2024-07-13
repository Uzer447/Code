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
        ll n;
        cin>>n;
        vll v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        ll curr=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            continue;
            if(v[i]<0)
            {
                if(curr>0)
                {
                    if(abs(v[i])<curr)
                    {
                        curr+=v[i];
                        v[i]=0;
                    }
                    else
                    {
                        v[i]+=curr;
                        curr=0;
                    }
                }
            }
            else
            {
                curr+=v[i];
            }
        }
        ll ans=0;
        for(int i=0; i<n;i++)
        {
            if(v[i]<0)
            {
                ans+=v[i];
            }
        }
        cout<<-1LL*ans<<endl;
    }

    return 0;
}
