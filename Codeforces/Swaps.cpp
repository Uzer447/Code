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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        vi b(n);
        rep(i, n)
        {
            cin >> a[i];
        }
        rep(i, n)
        {
            cin >> b[i];
        }
        for (int i = 1; i < n; i++)
        {
            b[i] = max(b[i - 1], b[i]);
        }
        int ans=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int l = 0, r = n - 1;
            while (l < r)
            {
                int mid = l + (r - l) / 2;
                if (b[mid] > a[i])
                {
                    r = mid;
                }
                else
                {
                    l = mid + 1;
                }
            }
            ans = min(ans, i + r);
        }
        cout << ans << '\n';
    }

    return 0;
}
