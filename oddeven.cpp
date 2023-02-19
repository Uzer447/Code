#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        long long x=abs(b-a);
        if(x%2==1)
        {
            cout<<2<<endl;
        }
        else if(x%2==0 && x!=0)
        {
            cout<<1<<endl;
        }
        else
        cout<<0<<endl;
    }
    return 0;
}