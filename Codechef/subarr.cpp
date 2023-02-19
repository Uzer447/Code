#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ansmin = 0;
        ll ansmax = 0;
        ll maxn = INT_MIN;
        ll minn = INT_MAX;
        ll k=INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            maxn = max(maxn, abs(a));
            k=max(k,a);
            minn = min(minn, a);
        }
        // cout<<maxn<<" min "<<minn<<endl;
        ansmax = maxn * maxn;
        if(k>minn)
        ansmin = min(k*minn,k*k);
        else if (minn < 0 && maxn > 0)
        {
            ansmin = minn * k;
        }
        else
            ansmin = minn * minn;
        cout << ansmin << " " << ansmax << endl;
    }
    return 0;
}