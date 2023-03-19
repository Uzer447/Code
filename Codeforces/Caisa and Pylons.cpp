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
    cin >> n;
    vector<int> v(n+1);
    v[0]=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    
    ll e=0;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        e+=v[i]-v[i+1];
        if(e<0)
        {
            ans+=abs(e);
            e=0;
        }
    }
    cout<<ans<<endl;
    return 0;
}
