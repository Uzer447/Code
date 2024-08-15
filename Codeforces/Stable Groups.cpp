#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
#define vll vector<long long>
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define print(X) cout << X << endl;
using namespace std;
const int MOD = 1e9 + 7;
const int SIZE = 1e6 + 10;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t=1;
    //cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
        vll v(n);
        rep(i,n)
        {
            cin>>v[i];
        }
        sort(vall(v));
        ll ans=1;
        vll diff;
        for(int i=1;i<n;i++)
        {
            ll d=v[i]-v[i-1];
            if(d>x)
            {
                diff.push_back(d);
            }
        }
        sort(vall(diff));
        rep(i,diff.size())
        {
            if(k==0)
            {
                ans++;
            }
            else
            {
                if(diff[i]%x==0)
                {
                    if(diff[i]/x-1<=k)
                    {
                        k-=(diff[i]/x-1);
                    }
                    else
                    {
                        k=0;
                        ans++;
                    }
                }
                else if(diff[i]/x<=k)
                {
                    k-=(diff[i]/x);
                }
                else
                {
                    k=0;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
