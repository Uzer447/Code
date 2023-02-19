#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=0;
        if(a==0)
        ans=1;
        else
        {
            a=a*1;
            b=b*2;
            ans=a+b+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}