#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans="";
    transform(s.begin(), s.end(), s.begin(),::tolower);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
        {
            ans=ans+"."+s[i];
        }
    }
    
    
    
    cout<<ans<<endl;
    return 0;
}