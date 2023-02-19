#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        long long x=k/2;
        b*=x;
        a*=(k-x);
        cout<<a-b<<endl;
    }
    return 0;
}