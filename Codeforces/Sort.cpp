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
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;
        vector<vi> prefa(n+1,vi(26,0));
        vector<vi> prefb(n+1,vi(26,0));
        for(int i=1;i<=n;i++)
        {
            char c=a[i-1];
            prefa[i][c-'a']++;
            rep(j,26)
            {
                prefa[i][j]+=prefa[i-1][j];
            }
        }
        for(int i=1;i<=n;i++)
        {
            char c=b[i-1];
            prefb[i][c-'a']++;
            rep(j,26)
            {
                prefb[i][j]+=prefb[i-1][j];
            }
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int ans=0;
            for(int c=0;c<26;c++)
            {
                int d1=prefa[r][c]-prefa[l-1][c];
                int d2=prefb[r][c]-prefb[l-1][c];
                ans+=abs(d1-d2);
            }
            cout<<ans/2<<endl;
        }
    }

    return 0;
}
