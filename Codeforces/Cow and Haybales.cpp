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
        int n,d;
        cin>>n>>d;
        int ans=0;
        vi v(n);
        rep(i,n)cin>>v[i];
        for(int i=1;i<n;i++)
        {
            if(d<=0)
            break;
            int ops=min(d,v[i]*i);
            d-=ops;
            int moved=ops/i;
            ans+=moved;
        }
        cout<<ans+v[0]<<endl;
    }

    return 0;
}
