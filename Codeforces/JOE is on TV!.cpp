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
    double n;
    cin >> n;
    double ans = 0;
    for (double i = 1; i <= n; i++)
    {
        ans += (1 / i);
    }
    cout <<fixed<<setprecision(12)<< ans << endl;

    return 0;
}
