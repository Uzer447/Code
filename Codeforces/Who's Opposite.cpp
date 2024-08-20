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
        ll a,b,c;
        cin>>a>>b>>c;
        ll n=2*(abs(a-b));
        if(a>n || b>n || c>n)
        {
            cout<<-1<<endl;
            continue;
        }
        int d1=c+(n/2);
        int d2=c-(n/2);
        if(d1>=1 && d1<=n)
        {
            cout<<d1<<endl;
        }
        else if(d2>=1 && d2<=n)
        {
            cout<<d2<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}
