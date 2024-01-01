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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int z=count(vall(s),'1');
        if(z==0)
        cout<<n<<endl;
        else if(z==n)
        cout<<2*n<<endl;
        else
        {
            int ans=0;
            rep(i,n)
            {
                if(s[i]=='1')
                {int st=i+1;
                ans=max(ans,max(2*st,2*(n-st+1)));}
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}
