#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, e;
    cin >> n >> e;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    vector<ll> x(n,0);
    x[0]=0;
    for(int i=1;i<n;i++)
    {
        if(v[i-1]>v[i])
        x[i]=x[i-1]+(v[i-1]-v[i]);
        else
        x[i]=x[i-1];
    }
    vector<ll> y(n,0);
    y[n-1]=0;
    for(int i=n-2;i>=0;i--)
    {
        if(v[i]<v[i+1])
        y[i]=y[i+1]+(v[i+1]-v[i]);
        else
        y[i]=y[i+1];
    }
    while(e--)
    {ll s,t;
    cin>>s>>t;
    if(s<t)
    {
        cout<<x[t-1]-x[s-1]<<endl;
    }
    else
    {
        cout<<y[t-1]-y[s-1]<<endl;
    }
}
    return 0;
}