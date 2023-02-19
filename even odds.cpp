#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll mid;
    if(n%2==1)
    {
        mid=n/2;
        mid++;
    }
    else
    mid=n/2;
    if(k>mid)
    {
        k=k-mid;
        cout<<2*k<<endl;
    }
    else
    {
        cout<<2*k-1<<endl;
    }
    return 0;
}