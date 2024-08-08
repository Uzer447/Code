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
long long solve(vi &x)
{
    sort(vall(x));
    return x[x.size()/2]-x[(x.size()-1)/2]+1;
}
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
        vi x(n);
        vi y(n);
        rep(i,n)
        {
            cin>>x[i]>>y[i];
        }
        cout<<solve(x)*solve(y)<<endl;
    }

    return 0;
}
