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
        int r, g, b, w;
        cin >> r >> g >> b >> w;
        int odd = r % 2 + g % 2 + b % 2 + w % 2;
        if (odd <= 1)
            cout << "Yes" << endl;
        else
        {
            if (r == 0 || g == 0 || b == 0)
                cout << "No" << endl;
            else
            {
                r--;
                b--;
                g--;
                w += 3;
                odd = r % 2 + g % 2 + b % 2 + w % 2;
                if (odd <= 1)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
        }
    }

    return 0;
}
