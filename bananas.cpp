#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,w;
    cin>>k>>n>>w;
    long long x=k;
    for(int i=2;i<=w;i++)
    {
        k=k+(x*i);
    }
    if(k-n>0)
    cout<<k-n<<endl;
    else
    cout<<0<<endl;
    return 0;
}