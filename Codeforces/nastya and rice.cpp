#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x=n*(a-b);
        ll y=n*(a+b);
        if(y>=c-d && x<=c+d)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

    return 0;
}