#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
ll min(ll a)
{
    ll ans=INT_MAX;
    while(a>0)
    {
        ans=min(ans,a%10);
        a/=10;
    }
    return ans;
}
ll max(ll a)
{
    ll ans=INT_MIN;
    while(a>0)
    {
        ans=max(ans,a%10);
        a/=10;
    }
    return ans;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll a,k;
        cin>>a>>k;
        if(k==1)
        cout<<a<<endl;
        else
        {
            k--;
            while(k--)
            {
                if(min(a)==0|| max(a)==0)
                break;
                a=a+min(a)*max(a);
            }
            cout<<a<<endl;
        }
    }
    return 0;
}
