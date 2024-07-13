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
        vector<ll> v;
        ll sum=0;
        ll k=1;
        while(sum+k<n)
        {
            sum+=k;
            v.pb(k);
            k=k*2LL;
        }
        if(n>sum)
        {
            v.pb(n-sum);
        }
        sort(vall(v));
        cout<<v.size()-1<<endl;
        for(int i=0; i<v.size()-1; i++)
        {
            cout<<v[i+1]-v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
