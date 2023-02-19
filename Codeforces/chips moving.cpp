#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<ll> v;
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int mid=n/2;
    mid--;
    vector<ll> diff;
    for(int i=0; i<n; i++)
    {
        diff.push_back(abs(v[mid]-v[i]));
    }
    for(int i=0; i<diff.size(); i++)
    {
        if(diff[i]%2==1)
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}