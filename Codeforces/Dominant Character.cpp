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
        int ans=1e9;
        rep(i,n)
        {
            vi freq(3,0);
            freq[s[i]-'a']++;
            for(int j=i+1;j<min(n,i+7);j++)
            {
                freq[s[j]-'a']++;
                if(freq[0]>freq[1] && freq[0]>freq[2])
                {
                    ans=min(ans,j-i+1);
                }
            }
        }
        if(ans==1e9)
        ans=-1;
        cout<<ans<<endl;
    }

    return 0;
}
