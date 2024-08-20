#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define print(X) cout << X << endl;
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
class DisjointSet
{
    vector<int> rank, parent, size;
public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionByRank(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v)
            return;
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    //cin >> t;
    while (t--)
    {
        int n,m1,m2;
        cin>>n>>m1>>m2;
        DisjointSet ds1(n);
        DisjointSet ds2(n);
        rep(i,m1)
        {
            int u,v;
            cin>>u>>v;
            ds1.unionBySize(u,v);
        }
        rep(i,m2)
        {
            int u,v;
            cin>>u>>v;
            ds2.unionBySize(u,v);
        }
        vector<pii> ans;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if((ds1.findUPar(i)!=ds1.findUPar(j)) && (ds2.findUPar(i)!=ds2.findUPar(j)))
                {
                    ans.push_back({i,j});
                    ds1.unionBySize(i,j);
                    ds2.unionBySize(i,j);
                }
            }
        }
        cout<<ans.size()<<endl;
        for(auto it:ans)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
    }

    return 0;
}
