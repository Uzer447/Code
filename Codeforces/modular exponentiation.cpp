#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll m;
    cin>>m;
    if(n>=27)
    cout<<m<<endl;
    else
    cout<<m%(1<<n)<<endl;
    return 0;
}