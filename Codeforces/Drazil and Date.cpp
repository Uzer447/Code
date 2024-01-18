#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll a,b,s;
    cin>>a>>b>>s;
    
    ll x=abs(0-a);
    ll y=abs(0-b);
    ll dist=x+y;
    ll diff=s-dist;
    if(s<dist)
    cout<<"No"<<endl;
    else if(diff%2==0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    
    return 0;
}