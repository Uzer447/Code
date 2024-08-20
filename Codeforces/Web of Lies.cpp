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
    int t=1;
    //cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<set<int>> adj(n+5);
        rep(i,m)
        {
            int u,v;
            cin>>u>>v;
            if(u>v)
            swap(u,v);
            adj[u].insert(v);
        }
        int ans=0;
        rep(i,n)
        {
            if(adj[i+1].empty())
            ans++;
        }
        int q;
        cin>>q;
        while(q--)
        {
            int x;
            cin>>x;
            if(x==1)
            {
                int u,v;
                cin>>u>>v;
                if(u>v)
                swap(u,v);
                if(adj[u].empty())ans--;
                adj[u].insert(v);
            }
            else if(x==2)
            {
                int u,v;
                cin>>u>>v;
                if(u>v)
                swap(u,v);
                adj[u].erase(v);
                if(adj[u].empty())ans++;
            }
            else
            {
                cout<<ans<<endl;
            }
        }

    }

    return 0;
}
