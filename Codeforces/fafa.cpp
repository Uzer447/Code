#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==2)
    cout<<1<<endl;
    else{
    int count=0;
    int i=2;
    while(n!=1)
    {
        if(n%i==0)
        {count++;
        n/=i;}
        else
        {i++;
        }

    }
    cout<<count<<endl;}
    return 0;
}