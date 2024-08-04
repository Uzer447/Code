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
        int n,x;
        cin>>n>>x;
        vi v(n);
        ll sum=0;
        ll k=0;
        rep(i,n)
        {
            cin>>v[i];
            k+=(v[i]/x+((v[i]%x!=0)?1:0));
            sum+=v[i];
        }
        cout<<sum/x+((sum%x!=0)?1:0)<<" "<<k<<endl;
    }

    return 0;
}
