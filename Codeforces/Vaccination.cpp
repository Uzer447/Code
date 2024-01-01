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
        int n, k, d, w;
        cin >> n >> k >> d >> w;
        vi a(n);
        rep(i, n) cin >> a[i];
        sort(a.begin(), a.end());
        int when = -1;
    int cnt = 0;
    int ans = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= when + d && cnt > 0)
        {
            cnt -= 1;
        }
        else
        {
            when = a[i] + w;
            cnt = k - 1;
            ans += 1;
        }
    }
    cout << ans << endl;
    }

    return 0;
}
