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
        vector<int> v(26,-1);
        forn(n)
        {
            v[s[i]-'a']=i;
        }
        for(int i=0;i<26;i++)
        {
            if(v[i]!=-1)
            {
                string ans="";
                ans.push_back(s[v[i]]);
                for(int j=0;j<n;j++)
                {
                    if(j==v[i])
                    {
                        continue;
                    }
                    else
                    {
                        ans.push_back(s[j]);
                    }
                }
                cout<<ans<<endl;
                break;
            }
        }
    }

    return 0;
}
