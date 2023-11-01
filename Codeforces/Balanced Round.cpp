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
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
        cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=0;
        int curr=0;
        forn(n-1)
        {
            if(v[i+1]-v[i]<=k)
            {
                curr++;
            }
            else
            {
                ans=max(ans,curr);
                curr=0;
            }
        }
        ans=max(ans,curr);
        ans++;
        cout<<n-ans<<endl;



        // int ind=-1;
        // forn(n-1)
        // {
        //     if(v[i+1]-v[i]>k)
        //     {
        //         ind=i;
        //         break;
        //     }
        // }
        // int indd=-1;
        // for(int i=n-1;i>0;i--)
        // {
        //     if(abs(v[i-1]-v[i])>k)
        //     {
        //         indd=i;
        //         break;
        //     }
        // }
        // if(ind==-1 && indd==-1)
        // cout<<0<<endl;
        // else
        // {
        //     cout<<min(n-1-ind,indd)<<endl;
        // }
    }

    return 0;
}
