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
        char ch;
        cin>>ch;
        string s;
        cin>>s;
        int x=0;
        vi ans;
        int flag=1;
        for(auto it:s)
        {
            if(it!=ch)
            {
                flag=0;
            }
        }
        if(flag==0)
        {
            for(int i=1;i<=n;i++)
            {
                flag=1;
                for(int j=i;j<=n;j++)
                {
                    flag=flag&(s[j-1]==ch);
                    j+=(i-1);
                }
                if(flag==1)
                {
                    ans.pb(i);
                    break;
                }
            }
            if(flag==false)
            {
                ans.pb(n);
                ans.pb(n-1);
            }
        }
        cout<<ans.size()<<endl;
        for(auto it:ans)
        cout<<it<<" ";
        if(ans.size()>0)
        cout<<endl;
    }

    return 0;
}
