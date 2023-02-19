#include <bits/stdc++.h>
#define ll long long 
using namespace std;
long long sumofdigits(ll n)
{
    ll sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    ll n;
    cin>>n;
    ll cnt=0;
    while(n%10!=n)
    {
        n=sumofdigits(n);
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}