#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        if(n%2==1)
        cout<<-1<<endl;
        else
        {
            ll maxn=max(n/4,n/6);
            ll min=0;
            if(n%6==0)
            min=n/6;
            else
            min=n/4;
            cout<<min<<" "<<maxn<<endl; 
        }
    }

    return 0;
}