#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n;
    cin>>a>>b>>n;
    long long k=a;
    int flag=0;
    if(a%b==0)
    {
        
    }
    for(long long i=0;i<n;i++)
    {
        a*=10;
        long long x=a/b;
        x++;
        a=x*b;
        
        
        if((a/10)!=k && i==0)
        {
            cout<<-1<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<a<<endl;
    return 0;
}