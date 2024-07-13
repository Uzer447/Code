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
        ll ans=0;
        vi v(n);
        rep(i,n)
        cin>>v[i];
        int maxi=INT_MIN;
        bool pos=(v[0]>0)?true:false;
        rep(i,n)
        {
            if(v[i]>0)
            {
                if(pos)
                {
                    maxi=max(maxi,v[i]);
                }
                else
                {
                    ans+=maxi;
                    pos=true;
                    maxi=v[i];
                }
            }
            else
            {
                if(pos==false)
                {
                    maxi=max(maxi,v[i]);
                }
                else
                {
                    ans+=maxi;
                    pos=false;
                    maxi=v[i];
                }
            }
            //cout<<maxi<<" ";
        }
        //cout<<endl;
        if(maxi!=INT_MIN)
        ans+=maxi;
        cout<<ans<<endl;
    }

    return 0;
}
