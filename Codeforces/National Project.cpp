#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,g,b;
        cin>>n>>g>>b;
        ll m=(n+1)/2;
        ll ans=m/g*(g+b);
        if(m%g==0)
        {
            ans-=b;
        }
        else
        {
            ans+=m%g;
        }
        cout<<max(ans,n)<<endl;
    }
    
    return 0;
}
