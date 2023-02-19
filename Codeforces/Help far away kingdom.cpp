#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            if(s[i-1]!='9')
            {
                ll x=s[i+1]-'0';
                if(x<5)
                {
                    cout<<ans<<endl;
                    break;
                }
                else 
                {
                    string temp=ans.substr(0,ans.size()-1);
                    int lastchar=ans[ans.size()-1]-'0';
                    lastchar++;
                    cout<<temp<<lastchar<<endl;
                    break;
                }
            }
            else
            {
                cout<<"GOTO Vasilisa."<<endl;
                break;
            }
        }
        else
        {
            ans=ans+s[i];
        }
    }
    return 0;
}