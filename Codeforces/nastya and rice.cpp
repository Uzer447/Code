#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll low=n*(a-b);
        ll high=n*(a+b);
        if(low>=(c-d))
        {
            cout<<"Yes"<<endl;
        }   
        else if(high<=(c+d))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        } 
    
    }

    return 0;
}