#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    map<int,pair<int,int>> mp;
    for(int j=1;j<=m;j++)
    {    forn(n)
        {
            int a;
            cin>>a;
            mp[i+1].first+=a;
            mp[i+1].second=i+1;
        }
    }
    int maxele=INT_MIN;
    int ans=0;
    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
        if(it.second.first>maxele)
        {
            ans=it.first;
            maxele=it.second.first;
        }
    }
    cout<<ans<<endl;
    return 0;
}
