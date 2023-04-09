#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    int cnt=1;
    int ans=0;
    for(auto it:v)
    {
        if(cnt<=0)
        break;
        cnt+=it.first-1;
        ans+=it.second;
    }
    cout<<ans<<endl;
    return 0;
}
