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
        ll x, y, k;
        cin >> x >> y >> k;
        while (k > 0)
        {
            if (x == 1)
            {
                x += (k % (y - 1));
                k = 0;
                break;
            }
            if (x % y != 0)
            {
                int temp = min(k, (y - x % y));
                x += temp;
                k -= temp;
            }
            else
            {
                x++;
                k--;
            }
            while (x % y == 0)
                x /= y;
        }
        cout << x + k << endl;
    }

    return 0;
}
