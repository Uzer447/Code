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
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int n=s.size();
        int l=-1;
        int ans=0;
        rep(i,n)
        {
            if(s[i]=='1')
            {
                ans+=min(a,(i-l-1)*b+(l==-1?a:0));
                l=i;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
