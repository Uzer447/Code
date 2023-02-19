#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    ll even=0,odd=0;
    while(n--)
    {
        ll a;
        cin>>a;
        if(a%2==0)
        even++;
        else
        odd++;
        sum+=a;
    }
    if(sum%2==0)
    {
        cout<<even<<endl;
    }
    else
    cout<<odd<<endl;
    return 0;
}