#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==0)
    {
        int g=n/2;
        g--;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && i!=0)
            {
                ans.push_back('-');
            }
                ans.push_back(s[i]);
        }
        cout<<ans<<endl;
    }
    else if(n%3==0)
    {
        int g=n/3;
        g--;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(i%3==0 && i!=0)
            {
                ans.push_back('-');
            }
                ans.push_back(s[i]);
        }
        cout<<ans<<endl;
    }
    else if(n%2==1)
    {
        int g=n/2;
        g--;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && i!=0 && g>0)
            {
                ans.push_back('-');
                g--;
            }
                ans.push_back(s[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
