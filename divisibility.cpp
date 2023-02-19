#include<iostream>
using namespace std;

int re(int a,int b)
{
    while(a%b!=0)
    {
       a+=1;
    }
    return a;
    
}





int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a,b;
        cin>>a;
        cin>>b;
        
        if(a<b)
        {
            cout<<(b-a)<<endl;
        }
        else
        {
            
           int ans=re(a,b);
           cout<<(ans-a)<<endl;
        }
    }
    return 0;
}