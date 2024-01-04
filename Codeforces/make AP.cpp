#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll x=a+c;
        x/=2;
        if((a+c)%2==1 || x%b!=0)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
    return 0;
}