#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=a+b+c;
    int pro=a*b*c;
    int x=(a+b)*c;
    int y=a*(b+c);
    int p=(a*b)+c;
    int q=a+(b*c);
    int ans=max(sum,max(pro,max(x,max(y,max(p,q)))));
    cout<<ans<<endl;
    
    return 0;
}