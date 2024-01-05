#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b,n,s;
        cin >> a >> b >> n >> s;
        ll x=a*n;
        if(s%n<=b && a*n+b>=s)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    

    
    return 0;
}