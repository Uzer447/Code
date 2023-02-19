#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x=n+(n/9);

        if(n%9!=0)
        cout<<x<<endl;
        else
        cout<<x-1<<endl;
    }
    return 0;
}