#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    ll mini=INT_MAX;
    ll maxi=INT_MIN;
    cout<<abs(v[1]-v[0])<<" "<<abs(v[n-1]-v[0])<<endl;
    
    
        for(int i=1; i<n; i++)
    {
        cout<<min(abs(v[i+1]-v[i]),abs(v[i]-v[i-1]))<<" "<<max(abs(v[i]-v[0]),abs(v[i]-v[n-1]))<<endl;
    }
    
    
    return 0;
}