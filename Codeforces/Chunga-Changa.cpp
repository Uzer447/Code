#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll x, y, z;
    cin >> x >> y >> z;
    ll ans=(x+y)/z;
    if(ans==(x/z+y/z))
    cout<<ans<<" "<<0<<endl;
    else
    cout<<ans<<" "<<min(z-(x%z),z-(y%z))<<endl;
    return 0;
}
