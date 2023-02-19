#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    ll steps=0;
    while(true)
    {
        if(n==1)
        break;
        if(__builtin_popcountll(n)==1)
        {
            cout<<-1<<endl;
            break;
        }
        if(n%6==0)
        n/=6;
        else
        n*=2;
        steps++;
    }
    if(n==1)
    cout<<steps<<endl;
    }
    return 0;
}