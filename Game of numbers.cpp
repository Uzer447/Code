#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll n,ll k,ll p)
{
    if(k==0)
    return 1;
    ll ans=(solve(n,k/2,p))%p;
    if(k%2==0)
    {
        return (ans*ans)%p;
    }
    else
    {
        return (n*ans*ans)%p;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k,p;
        cin>>n>>k>>p;
        cout<<solve(3,1000000000000000000,23)<<endl;
    }

    return 0;
}