#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int value(vector<int> &v,int n,int x)
{
    int ans=0;
    forn(n)
    {
        if(abs(x-v[i])>1)
        ans+=min(abs(v[i]-x-1),abs(v[i]-x+1));
    }
    return ans;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<int> v(n);
    int maxele=INT_MIN;
    int minele=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        maxele=max(maxele,v[i]);
        minele=min(minele,v[i]);
    }
    int ans=0;
    int minans=INT_MAX;
    int t=-1;
    for(int i=1;i<=100;i++)
    {
        ans=value(v,n,i);
        if(minans>ans)
        {
            minans=ans;
            t=i;
        }
    }
    cout<<t<<" "<<minans<<endl;
    return 0;
}
