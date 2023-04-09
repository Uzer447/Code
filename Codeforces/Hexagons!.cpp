#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long int
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n;
    cin>>n;
    if(n==0)
    {
        cout<<1<<endl;
    }
    else
    {
        ll ans=n*(3*n+3);
        cout<<ans+1<<endl;
    }

    return 0;
}
