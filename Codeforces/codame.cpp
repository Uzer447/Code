#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
// bool ispossible(vector<ll> &v,ll mid)
// {
//     rep(i,v.size())
//     {
//         if(v[i]>mid)
//         {
//             ans+=
//         }
//     }
// }

bool areAllElementsSame(vector<ll>& arr) {
    return std::adjacent_find(arr.begin(), arr.end(), std::not_equal_to<ll>()) == arr.end();
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll mx = INT_MIN;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            mx = max(mx, v[i]);
        }
        sort(vall(v));
        if(areAllElementsSame(v))
        {
            cout<<2*v[0]<<endl;
        }
        else if (n == 2)
            cout << sum << endl;
        else
        {
            ll ans=v[0];
            rep(i,n)
            {
                if(i!=0)
                {
                    v[i]-=ans;
                }
            }
            ll maxn=INT_MIN;
            rep(i,n)
            {
                maxn=max(maxn, v[i]);
            }
            cout<<ans+maxn<<endl;
        }
    }

    return 0;
}
