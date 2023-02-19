#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    int distress=0;
    while(n--)
    {
        long long a;
        char s;
        cin>>s>>a;
        
        if(s=='+')
        x+=a;
        else if(s=='-')
        {
            a*=-1;
            
            if((x+a)<0)
            distress++;
            else
            x+=a;
        }
        
    }
    cout<<x<<" "<<distress<<endl;
    return 0;
}