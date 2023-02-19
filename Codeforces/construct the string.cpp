#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<char> v;
    for(int i=97;i<=122;i++)
    {
        v.push_back(char(i));
    }
    while (t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        string ans="";
        for(int i=0;i<n;i++)
        {
            ans=ans+v[i%b];
        }
        cout<<ans<<endl;
    }

    return 0;
}