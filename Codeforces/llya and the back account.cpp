#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n>0)
    {
        cout<<n<<endl;
    }
    else
    {
        ll l=abs(n%10);
        ll sl=abs((n/10)%10);
        if(l>=sl)
        {
            cout<<n/10<<endl;
        }
        else
        {
            n/=100;
            cout<<(n*10)-l<<endl;            

        }
    }
    return 0;
}