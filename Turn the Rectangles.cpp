#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    bool ans=true;
    ll w,h;
    cin>>w>>h;
    ll pw=w,ph=max(w,h);
    t--;
    while (t--)
    {        
        cin>>w>>h;
        if(min(w,h)<=ph)
        ans=true;
        else
        ans=false;
    }
    if(ans)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

        return 0;
}