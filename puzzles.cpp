#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int ans=INT_MAX;
    for(int k=0;k<=m-n;k++)
    {
        ans=min(ans,v[n+k-1]-v[k]);
    }
    cout<<ans<<endl;
    return 0;
}