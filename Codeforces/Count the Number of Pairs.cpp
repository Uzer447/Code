#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
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
        int n;int k;
        cin>>n>>k;
        string s;
        cin>>s;
        vi big(26,0);
        vi small(26,0);
        rep(i,n)
        {
            if(s[i]>='A' && s[i]<='Z')
            big[s[i]-'A']++;
            else
            small[s[i]-'a']++;
        }
        int ans=0;
        rep(i,26)
        {
            int pairs=min(big[i],small[i]);
            ans+=pairs;
            small[i]-=pairs;
            big[i]-=pairs;
            ans+=min(k,max(big[i],small[i])/2);
            k-=min(k,max(big[i],small[i])/2);
        }
        cout<<ans<<endl;
    }

    return 0;
}
