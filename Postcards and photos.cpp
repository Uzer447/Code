#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=0;
    int curr=0;
    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i]<<endl;
        if(s[i]=='C' && s[i+1]=='P')
        {
            ans++;
            curr=0;
            //i++;
        }
        else if(s[i]=='P' && s[i+1]=='C')
        {
            ans++;
            curr=0;
            //i++;
        }
        if(curr==5)
        {
            ans++;
            curr=0;
            //i++;
        }
        else
        curr++;
        //cout<<curr<<endl;
    }
    if(curr==5)
        {
            ans++;
            curr=0;
            //i++;
        }
    cout<<ans<<endl;
    return 0;
}