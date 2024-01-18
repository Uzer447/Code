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
    int n,v;
    cin>>n>>v;
    vector<int> ans;
    rep(i,n)
    {
        int k;
        cin>>k;
        int flag=0;
        while(k--)
        {
            int s;
            cin>>s;
            if(v>s && flag==0)
            {
                ans.pb(i+1);
                flag=1;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    if(ans.size()==0)
    cout<<" "<<endl;
    cout<<endl;
    return 0;
}
