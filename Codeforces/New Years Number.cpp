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
        ll k=2020;
        ll y=n%k;
        ll x=((n-y)/k)-y;
        if(x>=0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

    return 0;
}