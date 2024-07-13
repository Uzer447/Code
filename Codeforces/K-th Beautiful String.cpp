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
        ll n,k;
        cin>>n>>k;
        ll i=1;
        ll x;
        while(true)
        {
            x=i*(i+1);
            x/=2;
            if(x>=k)
            break;
            i++;
        }
        rep(j,n-2-(i-1))
        {
            cout<<"a";
        }
        cout<<"b";
        rep(j,x-k)
        {
            cout<<"a";
        }
        cout<<"b";
        rep(j,n-2-(n-2-(i-1))-(x-k))
        cout<<"a";
        cout<<endl;
        //cout<<i<<endl;
    }

    return 0;
}
