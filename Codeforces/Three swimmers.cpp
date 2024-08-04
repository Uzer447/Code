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
        ll p,a,b,c;
        cin>>p>>a>>b>>c;
        ll x=a-(p%a);
        ll y=b-(p%b);
        ll z=c-(p%c);
        if(z==c || y==b || x==a)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<min(x,min(y,z))<<endl;
    }

    return 0;
}
