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
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vi v(m);
        rep(i,m)cin>>v[i];
        vi suffix(n+1,0);
        for(auto &it:v)
        {
            suffix[it]++;
        }
        for(int i=n;i>0;i--)
        {
            suffix[i-1]+=suffix[i];
        }
        rep(i,n)
        suffix[i+1]++;
        vi ans(26,0);
        int i=1;
        for(char ch:s)
        {
            ans[ch-'a']+=suffix[i];
            i++;
        }
        for(auto it:ans)
        cout<<it<<" ";
        cout<<endl;
    }

    return 0;
}
