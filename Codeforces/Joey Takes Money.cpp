#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
        ll pro=1;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            pro*=a;
            v.push_back(a);
        }
        ll ans=pro+(n-1);
        cout<<ans*2022<<endl;
    }

    
    return 0;
}