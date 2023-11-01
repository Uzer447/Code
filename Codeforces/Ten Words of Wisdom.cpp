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
        int n;
        cin>>n;
        int ans=-1;
        int curr=-1;
        for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a<=10)
            {
                if(b>curr)
                {
                    curr=b;
                    ans=i;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
