#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
        if(b>a)
        count++;
        if(c>a)
        count++;
        if(d>a)
        count++;
        cout<<count<<endl;
        t--;
    }
    return 0;
}