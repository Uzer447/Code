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
const int MAXN = 100010;

int A, B, n;
int a[MAXN], b[MAXN];

void solve()
{
    scanf("%d%d%d", &A, &B, &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &b[i]);
    int64_t damage = 0;
    for (int i = 1; i <= n; ++i)
        damage += int64_t(b[i] + A - 1) / A * a[i];
    for (int i = 1; i <= n; ++i)
        if (B - (damage - a[i]) > 0)
        {
            puts("YES");
            return;
        }
    puts("NO");
}

int main()
{
    int tests;
    scanf("%d", &tests);
    while (tests--)
        solve();
    return 0;
}
