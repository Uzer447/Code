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
        ll x=1;
        ll sum=0;
        while(n>1 && x<=k)
        {
            sum+=x;
            cout<<x<<" ";
            x*=2;
            n--;
        }
        if(n>0)
        {
            cout<<k-sum;
        }
        cout<<endl;
    }

    return 0;
}
