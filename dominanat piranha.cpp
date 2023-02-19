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
        cin >> n;
        vector<ll> v;
        ll maxe=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
            maxe=max(maxe,a);
        }
        ll ans=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==maxe)
            {
                if(i>0 && i<n-1)
                {
                    if(v[i-1]<maxe || v[i+1]<maxe)
                    {ans=i+1;
                    break;}
                }
                else if(i==0 && v[i+1]<maxe)
                {
                    ans=i+1;
                    break;
                }
                else if(i==n-1 && v[i-1]<maxe)
                {
                    ans=i+1;
                    break;
                }
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}