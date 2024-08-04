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
        int n;
        cin>>n;
        vi v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        ll x=0;
        for(int i=1;i<n;i++)
        {
            x+=abs(v[i]-v[i-1]);
        }
        ll y=abs(v[1]-v[0]);
        for(int i=1;i<n-1;i++)
        {
            ll k=(abs(v[i]-v[i-1])+abs(v[i]-v[i+1])-abs(v[i-1]-v[i+1]));
            y=max(y,k);
        }
        ll k=(abs(v[n-1]-v[n-2]));
        y=max(y,k);
        cout<<x-y<<endl;
    }

    return 0;
}
