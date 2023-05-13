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
        for(int i=0;i<n;i++)
        {
        cin>>v[i];
        }
        unordered_map<int,int> mp;
        forn(n)
        {
            for(int j=i+1;j<n;j++)
            {
                mp[v[i]+v[j]]++;
            }
        }
        int ans=INT_MIN;
        for(auto i:mp)
        {
            ans=max(ans,i.second);
        }
        cout<<ans<<endl;
    }

    return 0;
}
