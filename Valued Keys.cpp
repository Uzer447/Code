#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a>>b;
    string ans="";
    int fla=0;
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]<b[i])
        {
            fla=1;
            cout<<-1<<endl;
            break;
        }
        if(a[i]==b[i] && a[i]!='z' && b[i]!='z')
        {
            b[i]=b[i]+1;
            ans=ans+b[i];
        }
        else
        {
            ans=ans+b[i];
        }
    }
    if(fla==0)
    cout<<ans<<endl;
    return 0;
}