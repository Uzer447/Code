#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int k,d;
    cin>>k>>d;
    string ans="";
    if(d==0)
    {
        if(k>1)
        cout<<"No solution"<<endl;
    else if(k==1)
    {
        cout<<0<<endl;
    }
    }
    else
    {
        string ans="";
        string c=to_string(d);
        ans=ans+c;
        k--;
        while(k--)
        {
            ans.push_back('0');
        }
        cout<<ans<<endl;
    }
    return 0;
}
