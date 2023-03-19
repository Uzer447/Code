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
        vector<int> v(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        ll avg=sum/n;
        ll ans=0;
        forn(n)
        {
            if(v[i]>avg)
            {
                ans+=v[i]-avg;
                v[i]=avg;
            }
        }
        for(int i=1;i<n;i++)
        {
            ans+=abs(v[i-1]-v[i]);
        }
        cout<<ans+v[0]+v[n-1]<<endl;
    }

    return 0;
}
