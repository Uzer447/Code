#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ms=0,cs=0;
    while(n--)
    {
        int m,c;
        cin>>m>>c;
        if(m>c)
        ms++;
        else if(c>m)
        cs++;
    }
    if(ms>cs)
    cout<<"Mishka"<<endl;
    else if(cs>ms)
    cout<<"Chris"<<endl;
    else
    cout<<"Friendship is magic!^^"<<endl;
    return 0;
}