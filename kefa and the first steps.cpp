#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    for(int i=0 ; i<n ; i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll curr=0;
    ll maxlen=0;
    for(int i=0 ; i<n-1 ; i++)
    {
        if(v[i+1]>=v[i])
        curr++;
        else
        {
            maxlen=max(maxlen,curr);
            curr=0;
        }
    }
    maxlen=max(maxlen,curr);
    cout<<maxlen+1<<endl;

    return 0;
}