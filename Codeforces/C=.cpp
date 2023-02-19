#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int count=0;
        while(a<=n && b<=n)
        {
            count++;
            if(a<b)
            {
                a+=b;
            }
            else if(b<=a)
            b+=a;
        }
    
    cout<<count<<endl;
    }
    return 0;
}