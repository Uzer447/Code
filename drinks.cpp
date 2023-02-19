#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double ans=0.0;
    double sum=0.0;
    for(int i=1;i<=n;i++)
    {
        int p;
        cin>>p;
        sum+=p;
    }
    ans=sum/n;
    cout<<ans<<endl;
    return 0;
}