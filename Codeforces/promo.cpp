#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,q;
    cin >> n >> q;
    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    vector<ll> prefix(n+1);
    for(ll i = 0; i < n; i++)
    {
        prefix[i+1]=prefix[i]+v[i];
    }
    while(q--)
    {
        ll x,y;
        cin >> x>>y;
        cout<<prefix[n-x+y]-prefix[n-x]<<endl;
    }
    return 0;
}