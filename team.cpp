#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0,ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            int a;
            cin>>a;
           //cout<<a<<" ";
            if(a==1)count++;
        }
        if(count>=2)ans++;
        count=0;
    }
    cout<<ans<<endl;
    return 0;
}