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
        int n,m,k;
        cin>>n>>m>>k;
        vi v(n);
        rep(i,n)
        cin>>v[i];
        int b=n-m;
        k=min(k,m-1);
        int ans=0;
        for(int x=0;x<=k;x++)
        {
            int temp=INT_MAX;
            for(int y=0;y<=m-1-k;y++)
            {
                int a=max(v[x+y],v[x+y+b]);
                temp=min(temp,a);
            }
            ans=max(ans,temp);
        }
        cout<<ans<<endl;
    }

    return 0;
}
