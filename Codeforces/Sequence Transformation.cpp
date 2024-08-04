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
        vector<int> a(n);
        for (auto &it : a)
            cin >> it;
        vector<int> res(n + 1, 1);
        n = unique(a.begin(), a.end()) - a.begin();
        a.resize(n);
        for (int i = 0; i < n; ++i)
        {
            res[a[i]] += 1;
        }
        res[a[0]] -= 1;
        res[a[n - 1]] -= 1;
        int ans = 1e9;
        for (int i = 0; i < n; ++i)
        {
            ans = min(ans, res[a[i]]);
        }
        cout << ans << endl;
    }

    return 0;
}
