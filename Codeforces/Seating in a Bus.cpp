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
        vi v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        int flag=1;
        vi vis(n+1,0);
        vis[v[0]]=1;
        for(int i=1;i<n;i++)
        {
            if((v[i]-1>=1 && vis[v[i]-1]==1) || (v[i]+1<=n && vis[v[i]+1]==1))
            {
                vis[v[i]]=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            yes;
        }
        else
        {
            no;
        }
    }

    return 0;
}
