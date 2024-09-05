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
        ll n,k;
        cin>>n>>k;
        ll ans=0;
        ll p=1;
        while(k>0)
        {
            if(k%2==1)
            {
                ans=(ans+p)%MOD;
                p=(p*n)%MOD;
            }
            else
            {
                p=(p*n)%MOD;
            }
            k/=2;
        }
        cout<<ans<<endl;
    }

    return 0;
}
