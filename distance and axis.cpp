#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x,k;
        cin>>x>>k;
        if(x<k)
        {
            cout<<k-x<<endl;
        }
        else
        {
            if(abs(x-k)%2==1)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }

    return 0;
}