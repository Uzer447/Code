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
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vi a(n);
        vi b(n);
        vi pos(n+1);
        rep(i,n)
        {
            cin>>a[i];
        }
        rep(i,n)
        {
            cin>>b[i];
            pos[b[i]]=i;
        }
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            int diff=i-pos[a[i]];
            //cout<<diff<<endl;
            if(diff<0)
            {
                diff+=n;
            }
            mp[diff]++;
        }
        int ans=0;
        for(auto it:mp)
        {
            ans=max(ans,it.second);
        }
        cout<<ans<<endl;
    }

    return 0;
}
