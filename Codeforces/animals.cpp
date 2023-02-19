#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(a+b+c<x+y)
        cout<<"NO"<<endl;
        else
        {
            if(a+c<x)
            cout<<"NO"<<endl;
            else if(b+c<y)
            cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}