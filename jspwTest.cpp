#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n%3==0)
        cout<<n/3<<endl;
        else
        {double x=n;
        x=(double)n/3;
        long long y=n/3;
        //cout<<x<<" "<<y<<" ";
        if(x-y<0.5)
        {
            y--;
        }
        long long b=n-(3*y);
        if(b%2==0)
        {
            b=b/2;
        }
        cout<<y+b<<endl;
        }
    }
    return 0;
}