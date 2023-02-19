#include<bits/stdc++.h>
#define ll long long int
using namespace std;    
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll ans=0;
        if(b>=a)
        ans=b;
        else if(c<=d)
        ans=-1;
        else
        {
    
            a-=b;
            ll alc=ceil(a/(c-d));
            ans=b+c*alc;
            
        }
        cout<<ans<<endl;

    }
    return 0;
}