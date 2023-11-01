#include <bits/stdc++.h>
#define forn(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,c;
        cin>>n>>c;
        vector<int> v(n);
        ll S=0;
        ll x=0;
        for(int i=0;i<n;i++)
        {
        cin>>v[i];
        S+=v[i]*v[i];
        x+=v[i];
        }
        ll w;
        ll low=1;
        ll high=1e18;
        while(low<=high)
        {
            w=(low+high)/2;
            ll k=n*w*w;
            k+=2*x*w;
            k+=S;
            if(k==c)
            {
                break;
            }
            else if(k>c)
            {
                high=w-1;
            }
            else
            {
                low=w;
            }
        }
        cout<<high<<endl;

    }

    return 0;
}
