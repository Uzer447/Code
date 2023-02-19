#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    double nt=n;
    double yt=y;
    double temp=(yt/100)*nt;
    int k=ceil(temp);
    if(k>x)
    cout<<k-x<<endl;
    else
    cout<<0<<endl;

    return 0;
}