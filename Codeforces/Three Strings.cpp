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
        string a, b, c;
        cin >> a >> b >> c;
        int flag = 1;
        rep(i, a.size())
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                cout << "NO" << endl;
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
    }

    return 0;
}
