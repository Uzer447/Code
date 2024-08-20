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
        vi a(n + 1);
        vi b(n + 1);
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        rep(i, n)
        {
            cin >> b[i + 1];
            a[i+1] -= b[i + 1];
            sum+=a[i+1];
        }
        if (sum != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<pii> ans;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= a[i]; j++)
                {
                    for (int k = 1; k <= n; k++)
                        if (a[k] < 0)
                        {
                            ans.push_back(make_pair(i, k));
                            ++a[k];
                            break;
                        }
                }
            }
            cout << ans.size() << endl;
            for (auto it : ans)
            {
                cout << it.first << " " << it.second << endl;
            }
        }
    }

    return 0;
}
