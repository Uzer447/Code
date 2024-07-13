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
        ll l,r,m;
        cin>>l>>r>>m;
        ll a,b,c;
        for(int i=l;i<=r;i++)
        {
            a=i;
            ll n=(m+r-l)/a;
            if(n>0)
            {
                if(n*a >= (m-(r-l)) && n*a <= (m+r-l))
                {
                    ll diff=m-n*a;
                    if(diff<0)
                    {
                        c=l-diff;
                        b=l;
                    }
                    else
                    {
                        b=l+diff;
                        c=l;
                    }
                    break;
                }
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    return 0;
}
