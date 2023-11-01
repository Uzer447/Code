#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
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
        vector<ll> v(n);
        for(int i=0;i<n;i++)
        {
        cin>>v[i];
        }
        ll sum=v[0]+v[1]+v[2];
        int ans=0;
        int k=1;
        int curr=0;
        for(int i=3;i<=n;i++)
        {
            //cout<<sum<<endl;
            if(k==3)
            {
                ans+=curr;
                k=1;
                curr=0;
            }
            else
            {
                int x=sum%3;
                if(x!=0)
                curr=max(curr,(3-x));
                k++;
            }


            // if(sum%3!=0)
            // {
            //     int x=sum%3;
            //         ans+=(3-x);
            //         v[i-1]+=(3-x);
            //         sum+=(3-x);
                
            // }
            if(i!=n)
            {sum-=v[i-3];
            sum+=v[i];}
        }
        if(k!=1)
        ans+=curr;
        cout<<ans<<endl;
    }

    return 0;
}
