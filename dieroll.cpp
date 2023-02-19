#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w;
    cin>>y>>w;
    int ans=6-max(y,w)+1;
    if(ans==2)
    {
        cout<<ans/2<<"/3"<<endl;
    }
    else if(ans==3)
    {
        cout<<ans/3<<"/2"<<endl;
    }
    else if(ans==4)
    {
        cout<<ans/2<<"/3"<<endl;
    }
    else if(ans==6)
    {
        cout<<ans/6<<"/1"<<endl;
    }
    else
    cout<<ans<<"/6"<<endl;
    return 0;
    
}