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
        int n,x,y;
        cin>>n>>x>>y;
        x--;
        y--;
        vi ans(n,1);
        int e=-1;
        for(int i=x+1;i<n;i++)
        {
            ans[i]=e;
            e*=-1;
        }
        e=-1;
        for(int i=y-1;i>=0;i--)
        {
            ans[i]=e;
            e*=-1;
        }
        rep(i,n)
        {
            if(i)
            cout<<" ";
            cout<<ans[i];
        }
        cout<<endl;
    }

    return 0;
}
