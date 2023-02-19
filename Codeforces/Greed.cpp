#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    vector<ll> v;
    for (int i=0; i<n;i++)
    {
        ll a;
        cin>>a;
        sum+=a;
    }
    for (int i=0;i<n;i++)
    {
        ll b;
        cin>>b;
        v.push_back(b);
    }
    sort(v.begin(),v.end(),greater<int>());
    if(v[0]+v[1]>=sum)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}