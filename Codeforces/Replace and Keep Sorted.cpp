#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(X) cout<<X<<endl;
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    while (t--)
    {
        int n,q,k;
        cin>>n>>q>>k;
        vi v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            l--;
            r--;
            int ans=(v[l]-1)+(k-v[r])+2*((v[r]-v[l]+1)-(r-l+1));
            cout<<ans<<endl;
        }
    }

    return 0;
}
