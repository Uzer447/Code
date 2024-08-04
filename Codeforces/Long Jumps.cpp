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
        vi v(n);
        rep(i,n)
        cin>>v[i];
        vll score(n,0);
        for(int i=n-1;i>=0;i--)
        {
            score[i]=v[i];
            if(i+v[i]<n)
            {
                score[i]+=score[i+v[i]];
            }
        }
        ll ans=0;
        for(auto it:score)
        ans=max(ans,it);
        cout<<ans<<endl;
    }

    return 0;
}
