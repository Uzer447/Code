#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll l1,r1,l2,r2,k;
    cin>>l1>>r1>>l2>>r2>>k;
    ll l=max(l1,l2);
    ll r=min(r1,r2);
    if(l>r)
    {
        cout<<0<<endl;
    }
    else if(k>=l && k<=r)
    {
        cout<<r-l<<endl;
    }
    else
    {
        cout<<r-l+1<<endl;
    }

    return 0;
}
