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
const int N = 300010;
int n, m;
int a[N], b[N], c[N], ans[N];
vector<int> g[N];
void solve()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    g[i].clear();
    rep(i,n)
    {
        cin>>a[i];
    }
    rep(i,n)
    {
        cin>>b[i];
        if(b[i]!=a[i])
        {
            g[b[i]].pb(i);
        }
    }
    rep(i,m)
    {
        cin>>c[i];
    }
    int last=-1;
    if((int)g[c[m-1]].size()>0)
    {
        last=g[c[m-1]].back();
        g[c[m-1]].pop_back();
    }
    else
    {
        rep(i,n)
        {
            if(b[i]==c[m-1])
            {
                last=i;
                break;
            }
        }
    }
    if(last==-1)
    {
        no;
        return;
    }
    ans[m-1]=last;
    rep(i,m-1)
    {
        if((int)g[c[i]].size()==0)
        {
            ans[i]=last;
        }
        else
        {
            ans[i]=g[c[i]].back();
            g[c[i]].pop_back();
        }
    }
    for(int i=1;i<=n;i++)
    {
        if((int)g[i].size()>0)
        {
            no;
            return;
        }
    }
    yes;
    rep(i,m)
    {
        if(i)cout<<" ";
        cout<<ans[i]+1;
    }
    cout<<endl;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
