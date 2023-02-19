#include<bits/stdc++.h>
using namespace std;
int main()
{
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    char d;
    cin>>d;
    string s;
    cin>>s;
    if(d=='R')
    {
        for(int i=0;i<s.length();i++)
    {
        auto it=key.find(s[i]);
        cout<<key[it-1];
    }
    }
    else
    {
        for(int i=0;i<s.length();i++)
    {
        auto it=key.find(s[i]);
        cout<<key[it+1];
    }
    }
    return 0;

}