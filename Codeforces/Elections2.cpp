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
        int n,c;
        cin>>n>>c;
        vi v(n);
        rep(i,n)cin>>v[i];
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        int mx=*max_element(v.begin()+1,v.end());
        int mxc=max(mx,v[0]+c);
        int winner;
        if(v[0]+c==mxc)
        {
            winner=0;
        }
        else
        {
            winner=find(v.begin()+1,v.end(),mx)-v.begin();
        }
        ll sum=c;
        for(int i=0;i<n;i++)
        {
            int ans;
            if(i==winner)
            {
                ans=0;
            }
            else if(sum+v[i]>=mx)
            {
                ans=i;
            }
            else
            {
                ans=i+1;
            }
            sum+=v[i];
            cout<<ans<<" ";
        }
        cout<<endl;
    }

    return 0;
}
