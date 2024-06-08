#include <bits/stdc++.h>
#define rep(I, N) for (int I = 0; I < (N); ++I)
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define vall(X) (X).begin(), (X).end()
#define vi vector<int>
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
        ll n, m;
        cin >> n >> m;
        if (m == 0)
        {
            cout << n << endl;
        }
        else if (m == 1)
        {
            int x;
            if (n == 0)
                x = n | (n + 1);
            else
                x = (n - 1) | n | (n + 1);
            cout << x << endl;
        }
        else
        {
            ll ans;
            int x=(int)(log2(m));
            x--;
            while(x--)
            {
                ans=n|(n-1);
                ans=ans|(n+1);
                n=ans;
            }
            cout << ans << endl;
        }
    }

    return 0;
}
