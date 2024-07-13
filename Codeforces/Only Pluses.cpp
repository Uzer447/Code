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
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        rep(i,6)
        {
            rep(j,6)
            {
                rep(k,6)
                {
                    if(i+j+k<=5)
                    {
                        int x=(a+i);
                        x*=(b+j);
                        x*=(c+k);
                        ans=max(x,ans);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
