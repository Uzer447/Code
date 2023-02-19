#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        ll ans=(int)log2(a);
        b+=ans;
        while(a>0)
        {
            ans++;
            a/=b;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}