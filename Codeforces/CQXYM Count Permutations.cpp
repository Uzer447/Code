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
    vll f(100005);
    f[0]=1;
    f[1]=1;
    for(int i=2;i<=100001;i++)
    {
        f[i]=((i<<1)-1LL)*f[i-1]%MOD * (i<<1)%MOD;
    }
    while (t--)
    {
        int n;
        cin>>n;
        cout<<f[n]<<endl;
    }

    return 0;
}
