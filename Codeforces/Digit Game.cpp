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
        string s;
        cin >> n >> s;
        bool odd = false, even = false;
        for (int i = 1; i <= n; ++i)
        {
            if (i % 2 == 1)
            {
                odd |= ((s[i - 1] - '0') % 2 == 1);
            }
            else
            {
                even |= ((s[i - 1] - '0') % 2 == 0);
            }
        }
        if (n % 2 == 1)
        {
            cout << (odd ? 1 : 2) << '\n';
        }
        else
        {
            cout << (even ? 2 : 1) << '\n';
        }
    }

    return 0;
}
