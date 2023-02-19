#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
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
        sort(v.begin(),v.end());
        vector<ll> diff(n);
        diff[0]=0;
        for(int i=0;i<n-1;i++)
        {
            diff[i+1] = abs(v[i]-v[i+1]);
        }
        ll ans=0;
        for(int i=0;i<3;i++)
        {
            ans+=diff[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}