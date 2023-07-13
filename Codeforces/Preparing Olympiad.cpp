#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int ans = 0;
void gensubsets(vector<int> &v, int n, int sum, vector<int> &subsets, int i, int l, int r, int x)
{
    if (i==n)
    {
        int mx = *max_element(subsets.begin(), subsets.end());
        int my = *min_element(subsets.begin(), subsets.end());
        if (subsets.size()>1 && sum >= l && sum <= r && mx - my >= x)
        {
            ans++;
        }
        // for(auto it:subsets)
        // cout<<it<<" ";
        // cout<<endl;
        return;
    }
    subsets.pb(v[i]);
    sum+=v[i];
    gensubsets(v,n,sum,subsets,i+1,l,r,x);
    subsets.pop_back();
    sum-=v[i];
    gensubsets(v,n,sum,subsets,i+1,l,r,x);
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
        int n, l, r, x;
        cin >> n >> l >> r >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> subsets;
        gensubsets(v,n,0,subsets,0,l,r,x);
        cout<<ans<<endl;
    return 0;
}
