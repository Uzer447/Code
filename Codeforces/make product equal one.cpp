#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll zero=0;
    ll sum=0;
    ll p=1;
    for(int i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        if(a==0)
        zero++;
        else if(a>0)
        {
            sum+=(a-1);
            p*=1;
        }
        else if(a<0)
        {
            sum+=abs(a+1);
            p*=-1;
        }

    }
    if(zero==0 && p!=1)
    {
        sum+=2;
        cout<<sum<<endl;
    }
    else if(zero==0 && p==1)
    {
        cout<<sum<<endl;
    }
    else if(zero>0)
    {
        sum+=zero;
        cout<<sum<<endl;
    }
    return 0;
}