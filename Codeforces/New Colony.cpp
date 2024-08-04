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
        int n,k;
        cin>>n>>k;
        vi v(n);
        int mx=0;
        rep(i,n)
        {
            cin>>v[i];
            mx=max(mx,v[i]);
        }
        if(n*mx<k)
        {
            cout<<"-1"<<endl;
            continue;
        }
        int ans=n+1;
        for(int i=0;i<k;i++)
        {
            int x=-2;
            for(int j=0;j<n-1;j++)
            {
                if(v[j]<v[j+1])
                {
                    x=j;
                    break;
                }
            }
            ans=x+1;
            if(x==-2)
            {
                break;
            }
            v[x]++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
