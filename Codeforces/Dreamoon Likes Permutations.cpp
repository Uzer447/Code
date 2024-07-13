#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
bool check(vi &v,int start,int end,int len)
{
    unordered_map<int,int> vis;
    for(int i = start; i <= end;i++)
    {
        vis[v[i]]=1;
    }
    for(int i=1;i<=len;i++)
    {
        if(vis[i]==0)
        return false;
    }
    return true;
}
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
        cin>>v[i];
        int maxi=*max_element(vall(v));
        int len1=maxi;
        int len2=n-maxi;
        set<pii> ans;
        if(check(v,0,len1-1,len1) && check(v,len1,n-1,n-len1))
        {
            ans.insert({len1,n-len1});
        }
        if(check(v,0,n-len1-1,n-len1) && check(v,n-len1,n-1,len1))
        {
            ans.insert({n-len1,len1});
        }
        cout<<ans.size()<<endl;
        for(auto it:ans)
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}
