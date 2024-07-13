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
        ll n;
        cin>>n;
        ll ans=0;
        ll i=1;
        while(n>0)
        {
            if((n&1)==1)
            {
                ans+=2*i-1;
            }
            n>>=1;
            i*=2;
        }
        cout<<ans<<endl;
    }

    return 0;
}
