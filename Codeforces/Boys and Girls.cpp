#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    string ans="";
    bool flag=n>=m;
    int k=min(n,m);
    k*=2;
    forn(k)
    {
        if(n==0 || m==0)
        break;
        if(flag)
        {
            ans=ans+'B';
            n--;
            flag=false;
        }
        else
        {
            ans=ans+'G';
            m--;
            flag=true;
        }
    }
    while(n--)
    ans=ans+'B';
    while(m--)
    ans=ans+'G';
    cout<<ans<<endl;
    return 0;
}
