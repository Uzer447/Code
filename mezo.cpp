#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0,r=0;
    int i=0;
    while(i!=s.size())
    {
        if(s[i]=='L')
        l--;
        if(s[i]=='R')
        r++;
        i++;
    }
    int ans=r-l+1;
    cout<<ans<<endl;


    return 0;
}