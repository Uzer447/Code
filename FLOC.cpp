#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    int t;
    cin >> t;   
    map<char,int> mp;
    char a='A';
    for(int i=1;i<=26;i++)
    {
        mp[a]=i;
        a++;
    }
    while (t--)
    {
        string s;
        cin>>s;
        ll ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans=ans*26+mp[s[i]];
        }
        cout<<ans%123<<endl;
    } 
    return 0;
}