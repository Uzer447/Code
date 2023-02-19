#include<iostream>
using  namespace std;

bool islucky(long int a)
{
    bool ans=true;
    while(a>0)
    {
        if((a%10)!=4 && (a%10)!=7)
        {
            ans=false;break;
        }
        a=a/10;
    }
    return ans;
}
long int count(long int a)
{
    long int c=0;
    while(a>0)
    {
        int d=a%10;
        a=a/10;
        if(d==4 || d==7)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    long int n;
    cin>>n;
    cout<<islucky(n)<<endl;
    if(islucky(n))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(count(n)==4 || count(n)==7)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    cout<<count(n)<<endl;
    
    return 0;
}