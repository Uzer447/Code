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
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll> v(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
        cin>>v[i];
        sum+=v[i];
        }
        if((sum+x+y)%2==0)
        cout<<"Alice"<<endl;
        else
        cout<<"Bob"<<endl;
    }

    return 0;
}
