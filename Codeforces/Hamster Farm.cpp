#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
using namespace std;
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll n,k;
    cin>>n>>k;
    vll v(k,0);
    rep(i,k)
    cin>>v[i];
    ll type=0;
    ll minele=LLONG_MAX;
    rep(i,k)
    {
        if(n%v[i]<minele)
        {
            minele=n%v[i];
            type=i+1;
        }
    }
    cout<<type<<" "<<n/v[type-1]<<endl;

    return 0;
}
