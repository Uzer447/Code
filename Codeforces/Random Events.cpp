#include <bits/stdc++.h>
#include <iomanip>
#include <ios>
#include <iostream>
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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vi v(n);
        rep(i, n)
        {
            cin >> v[i];
        }
        int ind = n + 1;
        vi temp(vall(v));
        sort(vall(temp));
        for(int i=n-1;i>=0;i--)
        {
            if(temp[i]!=v[i])
            {
                ind=i+1;
                break;
            }
        }
        double ans = 1.0;
        //cout<<ind<<endl;
        rep(i, m)
        {
            int r;
            double p;
            cin >> r;
            cin >> p;
            //cout<<r<<" "<<p<<endl;
            if (r >= ind)
            {
                double x=(1.0 - p);
                //cout<<x<<endl;
                ans = ans * x;
            }
            //cout<<ans<<endl;
        }
        if(ind!=n+1)
        ans = 1.0 - ans;
        cout << setprecision(6);
        cout << ans << endl;
    }

    return 0;
}
