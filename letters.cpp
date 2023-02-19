#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    unordered_set<char> k;
    for(int i=1;i<s.size();i++)
    {
        
        if(s[i]>='a' && s[i]<='z')
        k.insert(s[i]);
    }
    int ans=k.size();
    cout<<ans<<endl;
    return  0;

}