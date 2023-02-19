#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    double n;
    cin>>n;
    double m;
    cin>>m;
    int x=n;
    int y=m;
    if(x%y==0)
    {
        while(y--)
        {
            cout<<x/m<<" ";
        }
        cout<<endl;
    }
    else
    {
        double k=ceil(n/m);
        int a=x%y;
        int z=a;
        while(z--)
        {
            cout<<k<<" ";
        }
        m=m-a;
        k--;
        //cout<<m<<" "<<a<<endl;
        while(m--)
        {
            cout<<k<<" ";
        }
        cout<<endl;

    }

    return 0;
}