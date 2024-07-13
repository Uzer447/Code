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
        int n;
        cin>>n;
        vi ans;
        unordered_map<int, int> mp;
        rep(i,2*n)
        {
            int x;
            cin>>x;
            if(mp[x]==0)
            {
                mp[x]=1;
                ans.pb(x);
            }
        }
        for(auto &it:ans)
        cout<<it<<" ";
        cout<<endl;
    }

    return 0;
}
