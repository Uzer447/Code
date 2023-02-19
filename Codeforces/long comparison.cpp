#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        a=a*pow(10,b);
        c=c*pow(10,d);
        if(a<c)
        cout<<"<"<<endl;
        else if(a>c)
        cout<<">"<<endl;
        else
        cout<<"="<<endl;
    }

    return 0;
}