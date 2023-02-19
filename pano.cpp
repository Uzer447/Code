#include<bits/stdc++.h>
using namespace std;


bool isnextprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    int flag=0;
    for(int i=n+1;i<=m;i++)
    {
       if(isnextprime(i) && i==m)
       {
        cout<<"YES"<<endl;flag=1;break;
       } 
    }
    if(flag==0)
    cout<<"NO"<<endl;
    return 0;
}