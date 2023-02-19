#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n,x;
    cin>>n>>x;
    ll ans=0;
    for(int i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            if(i==x/i && i<=n && x/i<=n)
            ans++;
            else if(i<=n && x/i<=n)
            ans+=2;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}