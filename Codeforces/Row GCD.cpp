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
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long b[m];
        for (long long i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        long long g = 0;
        for (long long i = 0; i < n - 1; i++)
        {
            g = __gcd(g, a[i + 1] - a[i]);
        }
        for (long long i = 0; i < m; i++)
        {
            cout << __gcd(a[0] + b[i], g) << " ";
        }
        cout << endl;
    }

    return 0;
}
