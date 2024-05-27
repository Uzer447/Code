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

string mul(string s, int k)
{
    string x = "";
    while (k--)
    {
        x = x + s;
    }
    return x;
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        int g = (__gcd(n, m));
        if (mul(s, m / g) == mul(t, n / g))
            cout << mul(s, m / g) << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
