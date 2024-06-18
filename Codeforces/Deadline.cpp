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
        ll n,d;
        cin>>n>>d;
        ll low=0;
        ll high=n;
        while(low<=high)
        {
            ll mid=(low+(high-low)/2);
            ll x=d/(mid+1);
            if(d%(mid+1)!=0)
            x++;
            if(mid+x <= n)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        if(low>n)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }

    return 0;
}
