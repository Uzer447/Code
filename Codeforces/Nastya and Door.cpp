#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
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
        vi v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        unordered_map<int,int> mp;
        mp[0]=0;
        mp[n-1]=0;
        for(int i=1;i<n-1;i++)
        {
            if(v[i]>v[i-1] && v[i]>v[i+1])
            {
                mp[i] = 1;
            }
            else
            {
                mp[i] = 0;
            }
        }
        vi peaks(n,0);
        for(int i=1;i<n-1;i++)
        {
            peaks[i]=peaks[i-1]+mp[i];
        }
        peaks[n-1]=peaks[n-2];
        // vi prepeaks(n,0);
        // for(int i=0;i<n-1;i++)
        // {
        //     prepeaks[i+1]=peaks[i];
        // }
        // for(auto it:peaks)
        // cout<<it<<" ";
        // cout<<endl;
        // int l=1;
        // int r=l+k-1;
        int maxpeaks=0;
        int ans=0;
        for(int l=0;l<=n-k+1;l++)
        {
            if(peaks[l+k-2]-peaks[l]>maxpeaks)
            {
                maxpeaks=peaks[l+k-2]-peaks[l];
                ans=l;
            }
        }
        // while(r<n)
        // {
        //     if(peaks[r-1]-peaks[l]>maxpeaks)
        //     {
        //         maxpeaks=peaks[r-1]-peaks[l];
        //         ans=l;
        //     }
        //     l++;
        //     r++;
        // }
        cout<<maxpeaks+1<<" "<<max(1,ans+1)<<endl;
        // for(auto it:prepeaks)
        // cout<<it<<" ";
        // cout<<endl;
    }

    return 0;
}
