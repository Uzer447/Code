#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    int i=0;
    for(;i<n;i++)
    {
        int a=(i*(i+1))/2;
        
        if(a==n)
        break;
        ans=ans+s[a];
    }
    cout<<ans<<endl;
    return 0;
}