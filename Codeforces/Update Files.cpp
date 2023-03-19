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
        ll n,k;
        cin>>n>>k;
        ll curr=1;
        ll ans=0;
        while(curr<k)
        {
            curr*=2;
            ans++;
        }
        if(curr<n)
        {
            ans+=(n-curr+k-1)/k;
        }
        cout<<ans<<endl;
    }

    return 0;
}
