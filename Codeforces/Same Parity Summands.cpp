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
        int n, k;
        cin >> n >> k;
        int n1 = n - (k - 1);
        if (n1 > 0 && n1 % 2 == 1)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i)
                cout << "1 ";
            cout << n1 << endl;
            continue;
        }
        int n2 = n - 2 * (k - 1);
        if (n2 > 0 && n2 % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 0; i < k - 1; ++i)
                cout << "2 ";
            cout << n2 << endl;
            continue;
        }
        cout << "NO" << endl;
    }

    return 0;
}
