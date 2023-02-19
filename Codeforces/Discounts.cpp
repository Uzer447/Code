#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<ll>());
    ll sum=accumulate(v.begin(),v.end(),0);
    ll m;
    cin>>m;
    while(m--)
    {
        ll x;
        cin>>x;
        
        ll ans=sum-v[x-1];
        cout<<ans<<endl;

    }

    return 0;
}