#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yess cout<<"YES\n";
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
        int n;
        cin>>n;
        vi v(n);
        vi pre(n+10,0);
        rep(i,n)
        {
            cin>>v[i];
            pre[i+1]=pre[i]^v[i];
        }
        bool yes=!pre[n];
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                yes|=(pre[i]==(pre[j]^pre[i]) && pre[i]==(pre[n]^pre[j]));
            }
        }
        if(yes)
        {
            yess;
        }
        else
        {
            no;
        }
    }

    return 0;
}
