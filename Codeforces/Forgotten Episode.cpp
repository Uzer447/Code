#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
        int n;
        cin>>n;
        vector<ll> v(n+1,0);
        for(int i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            v[x]=1;
        }
        for(int i=1;i<=n;i++)
        {
            if(v[i]==0)
            {
                cout<<i<<endl;
                break;
            }
        }

    return 0;
}