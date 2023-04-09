#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string a;
    cin>>a;
    string b;
    cin>>b;
    vector<int> f(26,0);
    vector<int> s(26,0);
    for(auto i:a)
    {
        f[i-'a']++;
    }
    for(auto i:b)
    {
        s[i-'a']++;
    }
    int flag=1;
    forn(26)
    {
        if(f[i]!=s[i])
        {
            flag=0;
            break;
        }
    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
