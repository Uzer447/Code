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
void solve()
{
    string s;
        cin>>s;
        int n=s.size();
        string ans(1,s[0]);
        vector<int> vis(26,0);
        vis[s[0]-'a']++;
        int pos=0;
        for(int i=1;i<n;i++)
        {
            if(vis[s[i]-'a'])
            {
                if(pos>0 && ans[pos-1]==s[i])
                {
                    pos--;
                }
                else if(pos+1<ans.size() && ans[pos+1]==s[i])
                {
                    pos++;
                }
                else
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
            else
            {
                if(pos==0)
                {
                    ans=s[i]+ans;
                }
                else if(pos==ans.size()-1)
                {
                    ans=ans+s[i];
                    pos++;
                }
                else
                {
                    cout<<"NO"<<endl;
                    return;
                }
            }
            vis[s[i]-'a']=1;
        }
        cout<<"YES"<<endl;
        rep(i,26)
        {
            if(!vis[i])
            {
                ans=ans+char(i+'a');
            }
        }
        cout<<ans<<endl;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
