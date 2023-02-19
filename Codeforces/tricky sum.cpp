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
        ll x=(n*(n+1))/2;
        ll y=1;
        while(y<=n)
        {
            x-=y*2;
            y*=2;
        }
        cout<<x<<endl;
    }

    return 0;
}