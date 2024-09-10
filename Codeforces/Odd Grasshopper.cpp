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
        ll x,n;
        cin>>x>>n;
        ll d;
        if(n%4==1)
        {
            d=-n;
        }
        else if(n%4==2)
        {
            d=1;
        }
        else if(n%4==3)
        {
            d=n+1;
        }
        else
        {
            d=0;
        }
        if(x%2==0)
        {
            cout<<x+d<<endl;
        }
        else
        {
            cout<<x-d<<endl;
        }
    }

    return 0;
}
