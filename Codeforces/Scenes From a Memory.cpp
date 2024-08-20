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
vi prime(1000,0);
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    rep(i, n)
    {
        if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9')
        {
            cout << 1 << endl;
            cout << s[i] << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (!(prime[(s[i] - '0') * 10 + (s[j] - '0')]))
            {
                cout << 2 << endl;
                cout << s[i] << s[j] << endl;
                return;
            }
        }
    }
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    //vi prime(1000,0);
    for (int i = 2; i < 100; i++)
    {
        prime[i] = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime[i] = 0;
            }
        }
    }
    while (t--)
    {
        solve();
    }

    return 0;
}
