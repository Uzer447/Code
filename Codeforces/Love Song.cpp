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
    int t=1;
    //cin >> t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        vi pre(n+1,0);
        vi hash(26,0);
        for(int i=0;i<26;i++)
        {
            hash[i]=i+1;
        }
        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+hash[s[i-1]-'a'];
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            cout<<pre[r]-pre[l-1]<<endl;
        }
    }

    return 0;
}
