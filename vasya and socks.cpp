#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ans=n;
    int x=n/m;
    while(x!=0)
    {
        ans++;
        x--;
        if(ans%m==0)
        x++;
    }
    cout<<ans<<endl;
    return 0;
}