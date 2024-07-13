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
        ll a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        ll ans;
        if(b>a)
        ans=log2(b/a);
        else 
        ans=log2(a/b);
        //cout<<ans<<endl;
        if(b>a)
        {
            //cout<<ans<<endl;
            if(a*(1LL<<ans)!=b)
            {
                cout<<-1<<endl;
            }
            else
            {
                ans=(1LL<<ans);
                ll k=0;
                while(ans%8==0)
                {
                    k++;
                    ans/=8LL;
                }
                while(ans%4==0)
                {
                    k++;
                    ans/=4LL;
                }
                while(ans%2==0)
                {
                    k++;
                    ans/=2LL;
                }
                cout<<k<<endl;
            }
        }
        else
        {
            if(a!=b*(1LL<<ans))
            {
                cout<<-1<<endl;
            }
            else
            {
                ans=(1LL<<ans);
                ll k=0;
                while(ans%8==0)
                {
                    k++;
                    ans/=8LL;
                }
                while(ans%4==0)
                {
                    k++;
                    ans/=4LL;
                }
                while(ans%2==0)
                {
                    k++;
                    ans/=2LL;
                }
                cout<<k<<endl;
            }
        }
        //cout<<ans<<endl;
    }

    return 0;
}
