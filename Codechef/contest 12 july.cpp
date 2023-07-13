#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(m);
        for(int i=0;i<m;i++)
        {
        cin>>v[i];
        }
        ll sum=accumulate(v.begin(),v.end(),0);
        ll x=(m-1)*n;
        x++;
        if(sum>=x)
        {
            ll y=sum%n;
            if(y==0)
            {
                y=n;
            }
            cout<<y<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

    return 0;
}
