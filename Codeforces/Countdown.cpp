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
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<pii> v;
        rep(i,n)
        {
            if(s[i]!='0')
            {
                v.pb({s[i]-'0',i});
            }
        }
        int ans=0;
        for(auto it:v)
        {
            if(it.second==n-1)
            ans+=it.first;
            else
            ans+=it.first+1;
        }
        cout<<ans<<endl;    
    }

    return 0;
}
