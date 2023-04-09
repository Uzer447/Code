#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        int flag=1;
        int d=1;
        forn(n)
        mp[s[i]]=-1;
        forn(n)
        {
            if(mp[s[i]]!=-1 && mp[s[i]]!=d)
            {
                flag=0;
                break;
            }
            else
            {
                mp[s[i]]=d;
            }
            if(d==1)
            d=0;
            else
            d=1;
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
