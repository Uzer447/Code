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
int solve(string s,char c)
{
    int n=s.size();
    int l=0;
    int r=n-1;
    int cnt=0;
    while(l<r)
    {
        if(s[l]!=s[r])
        {
            if(s[l]==c)
            {
                l++;
                cnt++;
            }
            else if(s[r]==c)
            {
                r--;
                cnt++;
            }
            else
            {
                return INT_MAX;
            }
        }
        else
        {
            l++;
            r--;
        }
    }
    return cnt;
}
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
        int ans=INT_MAX;
        for(char c='a';c<='z';c++)
        {
            ans=min(ans,solve(s,c));
        }
        if(ans==INT_MAX) 
        ans=-1;
        cout<<ans<<endl;
    }

    return 0;
}
