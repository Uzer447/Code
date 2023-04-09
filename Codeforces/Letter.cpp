#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    string ans;
    getline(cin,s);
    getline(cin,ans);
    unordered_map<char,int> mp;
    for(auto i:s)
    {
        if(i!=' ')
        mp[i]++;
    }
    int flag=1;
    for(auto i:ans)
    {
        if(mp[i]<=0 && i!=' ')
        {
            flag=0;
            break;
        }
        else
        {
            mp[i]--;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}
